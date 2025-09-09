extern "C" Vec<2> meet(Vec<2> arg0,Vec<2> arg1){
  return Vec<2>{arg0[0]|arg1[0], arg0[1]|arg1[1]};
}

extern "C" Vec<2> xor_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5 = autogen4&autogen1;
  APInt autogen6 = autogen3&autogen2;
  APInt autogen7 = autogen5+autogen6;
  APInt autogen8 = autogen4&autogen2;
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> xor_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  unsigned autogen6_autocast = autogen4.getBitWidth();
  APInt autogen6(autogen4.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen4;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.clearLowBits(autogen6.getZExtValue());
  else
    autogen7.clearLowBits(autogen6.getBitWidth());
  APInt autogen8 = autogen2;
  autogen8.clearSignBit();
  APInt autogen9 = autogen8-autogen5;
  unsigned autogen10_autocast = autogen7.countr_one();
  APInt autogen10(autogen7.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen1&autogen3;
  APInt autogen12;
  //= A::APIntOps::umin(autogen7,autogen9);
  if (autogen7.ule(autogen9)){
    autogen12 = autogen7;
  }else{
    autogen12=autogen9;
  }
  APInt autogen13 = autogen11;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen13.clearHighBits(autogen10.getZExtValue());
  else
    autogen13.clearHighBits(autogen10.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> xor_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = xor_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> xor_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = xor_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> xor_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = xor_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = xor_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = meet(autogen2,autogen3);
  return autogen4;
}
