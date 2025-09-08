#ifndef APInt_H
#define APInt_H

using namespace llvm;

template <unsigned int N> class Vec {
  static_assert(N != 0, "Vec must include at least one element");

private:

public:
  APInt v[N];

  template <typename... Args> Vec(Args... args) {
    static_assert(sizeof...(args) == N, "Number of arguments must match N");
    APInt arr[] = {args...};

    for (unsigned int i = 0; i < N; ++i)
      v[i] = arr[i];
  }

  Vec(unsigned int bw) {
    const APInt z = APInt(bw, 0);
    for (unsigned int i = 0; i < N; ++i)
      v[i] = z;
  }

  Vec(const Vec<N> &other) {
    for (unsigned int i = 0; i < N; ++i)
      v[i] = other.v[i];
  }

  Vec &operator=(const Vec<N> &other) {
    if (this != &other)
      for (unsigned int i = 0; i < N; ++i)
        v[i] = other.v[i];

    return *this;
  }

  bool operator==(const Vec<N> &other) const {
    for (unsigned int i = 0; i < N; ++i)
      if (v[i] != other.v[i])
        return false;

    return true;
  }

  const APInt &operator[](unsigned int i) const { return v[i]; }
  APInt &operator[](unsigned int i) { return v[i]; }
};

Vec<2> getTop(Vec<2> arg){
  APInt tmp(arg[0].getBitWidth(), 0);
  return Vec<2>{tmp,tmp};
}

#endif
