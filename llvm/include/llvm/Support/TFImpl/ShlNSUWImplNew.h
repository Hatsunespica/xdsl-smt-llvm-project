extern "C" Vec<2> shl_nsuw_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  int autogen6 = autogen4.eq(autogen5);
  APInt autogen7 = autogen6 ? autogen1 : autogen3 ;
  APInt autogen8 = smin(autogen2,autogen4);
  unsigned autogen9_autocast = autogen1.countr_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen7;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen10.setLowBits(autogen7.getZExtValue());
  else
    autogen10.setLowBits(autogen7.getBitWidth());
  APInt autogen11;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen11 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen11 = autogen8.lshr(autogen7.getZExtValue());
  }
  APInt autogen12 = autogen10;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen12.setLowBits(autogen9.getZExtValue());
  else
    autogen12.setLowBits(autogen9.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nsuw_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen6.countl_zero();
  APInt autogen7(autogen6.getBitWidth(),autogen7_autocast);
  APInt autogen8 = smin(autogen3,autogen1);
  APInt autogen9 = autogen4;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen9.setLowBits(autogen3.getZExtValue());
  else
    autogen9.setLowBits(autogen3.getBitWidth());
  unsigned autogen10_autocast = autogen3.countl_one();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen9;
  autogen11.clearSignBit();
  APInt autogen12 = autogen7;
  if (autogen2.ule(autogen2.getBitWidth()))
    autogen12.setLowBits(autogen2.getZExtValue());
  else
    autogen12.setLowBits(autogen2.getBitWidth());
  APInt autogen13 = umin(autogen5,autogen8);
  APInt autogen14 = autogen10;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen14.clearLowBits(autogen12.getZExtValue());
  else
    autogen14.clearLowBits(autogen12.getBitWidth());
  APInt autogen15 = autogen11;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen15.setHighBits(autogen13.getZExtValue());
  else
    autogen15.setHighBits(autogen13.getBitWidth());
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> shl_nsuw_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen5;
  autogen7.setSignBit();
  int autogen8 = autogen4.ule(autogen2);
  APInt autogen9 = autogen8 ? autogen1 : autogen7 ;
  APInt autogen10 = autogen7;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen10.clearHighBits(autogen6.getZExtValue());
  else
    autogen10.clearHighBits(autogen6.getBitWidth());
  APInt autogen11 = autogen5;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen11.setLowBits(autogen3.getZExtValue());
  else
    autogen11.setLowBits(autogen3.getBitWidth());
  APInt autogen12 = autogen10&autogen6;
  APInt autogen13 = autogen1;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.setHighBits(autogen12.getZExtValue());
  else
    autogen13.setHighBits(autogen12.getBitWidth());
  APInt autogen14 = autogen13&autogen9;
  APInt autogen15 = autogen11;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen15.clearHighBits(autogen10.getZExtValue());
  else
    autogen15.clearHighBits(autogen10.getBitWidth());
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> shl_nsuw_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),0);
  APInt autogen6(autogen2.getBitWidth(),1);
  unsigned autogen7_autocast = autogen2.getBitWidth();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen7.countr_zero();
  APInt autogen8(autogen7.getBitWidth(),autogen8_autocast);
  int autogen9 = autogen5.ult(autogen6);
  APInt autogen10 = autogen1;
  autogen10.setSignBit();
  APInt autogen11 = smax(autogen1,autogen4);
  APInt autogen12 = autogen5;
  autogen12.setSignBit();
  APInt autogen13 = autogen12;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen13.setHighBits(autogen11.getZExtValue());
  else
    autogen13.setHighBits(autogen11.getBitWidth());
  APInt autogen14 = autogen10;
  if (autogen2.ule(autogen2.getBitWidth()))
    autogen14.clearHighBits(autogen2.getZExtValue());
  else
    autogen14.clearHighBits(autogen2.getBitWidth());
  APInt autogen15 = autogen9 ? autogen3 : autogen8 ;
  APInt autogen16;
  if (autogen14.uge(autogen14.getBitWidth())) {
    autogen16 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen16 = autogen13.shl(autogen14.getZExtValue());
  }
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> shl_nsuw_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5(autogen2.getBitWidth(),0);
  APInt autogen6(autogen2.getBitWidth(),1);
  unsigned autogen7_autocast = autogen2.getBitWidth();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen7;
  autogen8.setSignBit();
  APInt autogen9;
  if (autogen2.uge(autogen2.getBitWidth())) {
    autogen9 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen9 = autogen1.shl(autogen2.getZExtValue());
  }
  APInt autogen10 = autogen8;
  autogen10.clearSignBit();
  APInt autogen11 = autogen3;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen11.setHighBits(autogen4.getZExtValue());
  else
    autogen11.setHighBits(autogen4.getBitWidth());
  APInt autogen12 = autogen5;
  if (autogen2.ule(autogen2.getBitWidth()))
    autogen12.setLowBits(autogen2.getZExtValue());
  else
    autogen12.setLowBits(autogen2.getBitWidth());
  APInt autogen13 = autogen11-autogen6;
  APInt autogen14;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen14 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen14 = autogen9.lshr(autogen10.getZExtValue());
  }
  APInt autogen15 = smin(autogen13,autogen12);
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> shl_nsuw_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_nsuw_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_nsuw_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_nsuw_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_nsuw_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = meet(autogen2,autogen3);
  Vec<2> autogen8 = meet(autogen7,autogen4);
  Vec<2> autogen9 = meet(autogen8,autogen5);
  Vec<2> autogen10 = meet(autogen9,autogen6);
  return autogen10;
}
