extern "C" Vec<2> lshr_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5 = umin(autogen4,autogen4);
  APInt autogen6 = autogen2;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen6.clearLowBits(autogen4.getZExtValue());
  else
    autogen6.clearLowBits(autogen4.getBitWidth());
  unsigned autogen7_autocast = autogen6.countr_zero();
  APInt autogen7(autogen6.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen1.countl_one();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umin(autogen8,autogen7);
  APInt autogen10 = autogen2|autogen9;
  APInt autogen11 = autogen4-autogen5;
  APInt autogen12 = autogen11;
  autogen12.clearSignBit();
  APInt autogen13 = autogen3;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen13.setHighBits(autogen10.getZExtValue());
  else
    autogen13.setHighBits(autogen10.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> lshr_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  unsigned autogen4_autocast = autogen2.getBitWidth();
  APInt autogen4(autogen2.getBitWidth(),autogen4_autocast);
  APInt autogen5 = autogen3;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen5.clearLowBits(autogen4.getZExtValue());
  else
    autogen5.clearLowBits(autogen4.getBitWidth());
  APInt autogen6 = ~autogen5;
  APInt autogen7 = ~autogen1;
  APInt autogen8;
  if (autogen2.uge(autogen2.getBitWidth())) {
    autogen8 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen8 = autogen7.lshr(autogen2.getZExtValue());
  }
  unsigned autogen9_autocast = autogen6.countl_zero();
  APInt autogen9(autogen6.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen10 = APInt(autogen6.getBitWidth(), 0);
  } else {
    autogen10 = autogen6.shl(autogen8.getZExtValue());
  }
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = umin(autogen1,autogen3);
  APInt autogen6;
  if (autogen3.uge(autogen3.getBitWidth())) {
    autogen6 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen6 = autogen3.shl(autogen3.getZExtValue());
  }
  APInt autogen7 = autogen4;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen7.setHighBits(autogen3.getZExtValue());
  else
    autogen7.setHighBits(autogen3.getBitWidth());
  APInt autogen8 = smin(autogen6,autogen5);
  APInt autogen9;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen9 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen9 = autogen8.lshr(autogen8.getZExtValue());
  }
  APInt autogen10 = autogen9;
  if (autogen2.ule(autogen2.getBitWidth()))
    autogen10.clearHighBits(autogen2.getZExtValue());
  else
    autogen10.clearHighBits(autogen2.getBitWidth());
  APInt autogen11 = umax(autogen1,autogen7);
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" int lshr_partial_solution_2_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setHighBits(autogen5.getZExtValue());
  else
    autogen6.setHighBits(autogen5.getBitWidth());
  int autogen7 = autogen6.eq(autogen4);
  int autogen8 = autogen4.ule(autogen5);
  int autogen9 = autogen7&autogen8;
  int autogen10 = autogen9|autogen7;
  return autogen10;
}

extern "C" Vec<2> lshr_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = umin(autogen2,autogen1);
  APInt autogen6 = autogen4;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen6.setHighBits(autogen3.getZExtValue());
  else
    autogen6.setHighBits(autogen3.getBitWidth());
  unsigned autogen7_autocast = autogen5.countl_one();
  APInt autogen7(autogen5.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen7.countl_one();
  APInt autogen8(autogen7.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umax(autogen3,autogen6);
  Vec<2> autogen10 = Vec<2>{autogen9,autogen8};
  return autogen10;
}

extern "C" Vec<2> lshr_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshr_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshr_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_2_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_2_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshr_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = lshr_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = lshr_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = lshr_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = meet(autogen2,autogen3);
  Vec<2> autogen7 = meet(autogen6,autogen4);
  Vec<2> autogen8 = meet(autogen7,autogen5);
  return autogen8;
}
