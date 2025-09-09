extern "C" Vec<2> sdiv_exact_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),0);
  APInt autogen8(autogen3.getBitWidth(),1);
  unsigned autogen9_autocast = autogen3.getBitWidth();
  APInt autogen9(autogen3.getBitWidth(),autogen9_autocast);
  int autogen10 = autogen5.ult(autogen6);
  APInt autogen11 = autogen10 ? autogen7 : autogen8 ;
  APInt autogen12;
  if (autogen4.isMinSignedValue() && autogen2 == -1) {
    autogen12 = APInt::getSignedMinValue(autogen4.getBitWidth());
  } else if (autogen2 == 0 && autogen4.isNonNegative()) {
    autogen12 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen2 == 0 && autogen4.isNegative()) {
    autogen12 = APInt(autogen4.getBitWidth(), 1);
  } else {
    autogen12 = autogen4.sdiv(autogen2);
  }
  APInt autogen13 = autogen4;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen13.setHighBits(autogen9.getZExtValue());
  else
    autogen13.setHighBits(autogen9.getBitWidth());
  APInt autogen14 = autogen11-autogen11;
  APInt autogen15;
  if (autogen14.uge(autogen14.getBitWidth())) {
    autogen15 = APInt(autogen12.getBitWidth(), 0);
  } else {
    autogen15 = autogen12.shl(autogen14.getZExtValue());
  }
  APInt autogen16 = autogen12^autogen13;
  unsigned autogen17_autocast = autogen1.countr_one();
  APInt autogen17(autogen1.getBitWidth(),autogen17_autocast);
  int autogen18 = autogen14.ule(autogen17);
  APInt autogen19 = autogen16|autogen16;
  APInt autogen20 = autogen18 ? autogen15 : autogen19 ;
  Vec<2> autogen21 = Vec<2>{autogen20,autogen19};
  return autogen21;
}

extern "C" int sdiv_exact_partial_solution_0_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  int autogen5 = autogen4.eq(autogen2);
  return autogen5;
}

extern "C" Vec<2> sdiv_exact_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6;
  if (autogen2 == 0) {
    autogen6 = APInt::getAllOnes(autogen1.getBitWidth());
  } else {
    autogen6 = autogen1.udiv(autogen2);
  }
  APInt autogen7;
  if (autogen3 == 0) {
    autogen7 = autogen2;
  } else {
    autogen7 = autogen2.urem(autogen3);
  }
  APInt autogen8 = smin(autogen4,autogen6);
  APInt autogen9 = smax(autogen8,autogen8);
  APInt autogen10 = ~autogen9;
  APInt autogen11 = autogen5|autogen6;
  int autogen12 = autogen6.eq(autogen7);
  APInt autogen13 = autogen12 ? autogen11 : autogen10 ;
  APInt autogen14;
  if (autogen13 == 0) {
    autogen14 = APInt::getAllOnes(autogen4.getBitWidth());
  } else {
    autogen14 = autogen4.udiv(autogen13);
  }
  Vec<2> autogen15 = Vec<2>{autogen14,autogen13};
  return autogen15;
}

extern "C" int sdiv_exact_partial_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  unsigned autogen5_autocast = autogen2.getBitWidth();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  int autogen6 = autogen5.ule(autogen4);
  int autogen7 = autogen2.ult(autogen3);
  int autogen8 = autogen6^autogen7;
  int autogen9 = autogen7|autogen6;
  int autogen10 = autogen6^autogen9;
  int autogen11 = autogen8^autogen10;
  return autogen11;
}

extern "C" Vec<2> sdiv_exact_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_exact_partial_solution_0_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_exact_partial_solution_0_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_exact_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_exact_partial_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_exact_partial_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_exact_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sdiv_exact_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = sdiv_exact_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = meet(autogen2,autogen3);
  return autogen4;
}
