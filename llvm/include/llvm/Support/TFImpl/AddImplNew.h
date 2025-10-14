extern "C" Vec<2> add_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6(autogen4.getBitWidth(),1);
  APInt autogen7 = autogen2&autogen3;
  APInt autogen8 = autogen1+autogen3;
  APInt autogen9 = autogen8+autogen5;
  APInt autogen10 = autogen4&autogen1;
  APInt autogen11 = autogen4&autogen2;
  APInt autogen12 = ~autogen9;
  APInt autogen13 = autogen7^autogen10;
  APInt autogen14 = autogen6&autogen9;
  APInt autogen15 = autogen12&autogen13;
  APInt autogen16 = autogen11&autogen14;
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> add_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen6(autogen4.getBitWidth(),1);
  APInt autogen7 = autogen3+autogen6;
  APInt autogen8 = autogen7+autogen1;
  APInt autogen9 = autogen5+autogen6;
  APInt autogen10 = ~autogen9;
  APInt autogen11 = autogen3|autogen2;
  APInt autogen12 = autogen2^autogen8;
  APInt autogen13 = autogen11&autogen12;
  APInt autogen14 = ~autogen10;
  APInt autogen15 = autogen13&autogen1;
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> add_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = autogen2+autogen4;
  APInt autogen7 = ~autogen2;
  APInt autogen8 = autogen3|autogen5;
  APInt autogen9 = autogen8&autogen1;
  APInt autogen10 = autogen7|autogen6;
  APInt autogen11 = ~autogen8;
  APInt autogen12 = autogen10|autogen11;
  APInt autogen13 = autogen9&autogen6;
  APInt autogen14 = ~autogen12;
  Vec<2> autogen15 = Vec<2>{autogen14,autogen13};
  return autogen15;
}

extern "C" Vec<2> add_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen3|autogen3;
  APInt autogen5 = autogen2+autogen4;
  APInt autogen6 = autogen5^autogen1;
  APInt autogen7 = autogen4&autogen6;
  APInt autogen8 = autogen1&autogen7;
  APInt autogen9 = autogen7&autogen2;
  APInt autogen10 = autogen6&autogen8;
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> add_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = autogen1|autogen1;
  APInt autogen7 = autogen3+autogen5;
  APInt autogen8 = autogen7+autogen6;
  APInt autogen9 = autogen8&autogen4;
  APInt autogen10 = ~autogen5;
  APInt autogen11 = autogen5&autogen10;
  APInt autogen12 = autogen9&autogen2;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> add_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> add_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> add_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> add_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> add_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> add_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = add_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = add_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = add_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = add_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = add_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = meet(autogen2,autogen3);
  Vec<2> autogen8 = meet(autogen7,autogen4);
  Vec<2> autogen9 = meet(autogen8,autogen5);
  Vec<2> autogen10 = meet(autogen9,autogen6);
  return autogen10;
}
