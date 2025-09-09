extern "C" Vec<2> shl_nsw_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen3.countl_zero();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umin(autogen1,autogen2);
  APInt autogen10 = autogen4;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen10.clearHighBits(autogen8.getZExtValue());
  else
    autogen10.clearHighBits(autogen8.getBitWidth());
  APInt autogen11 = umax(autogen7,autogen6);
  APInt autogen12;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen12 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen12 = autogen1.shl(autogen11.getZExtValue());
  }
  unsigned autogen13_autocast = autogen9.countl_one();
  APInt autogen13(autogen9.getBitWidth(),autogen13_autocast);
  APInt autogen14 = autogen12^autogen10;
  APInt autogen15 = autogen8+autogen11;
  int autogen16 = autogen7.eq(autogen13);
  APInt autogen17 = autogen16 ? autogen15 : autogen5 ;
  APInt autogen18;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen18 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen18 = autogen9.lshr(autogen8.getZExtValue());
  }
  APInt autogen19;
  if (autogen17.uge(autogen17.getBitWidth()) && autogen14.isSignBitSet()) {
    autogen19 = APInt::getAllOnes(autogen14.getBitWidth());
  } else if (autogen17.uge(autogen17.getBitWidth()) && autogen14.isSignBitClear()) {
    autogen19 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen19 = autogen14.ashr(autogen17.getZExtValue());
  }
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" Vec<2> shl_nsw_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),0);
  APInt autogen7(autogen3.getBitWidth(),1);
  unsigned autogen8_autocast = autogen3.getBitWidth();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  int autogen9 = autogen6.eq(autogen7);
  unsigned autogen10_autocast = autogen1.countl_zero();
  APInt autogen10(autogen1.getBitWidth(),autogen10_autocast);
  APInt autogen11;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen11 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen11 = autogen5.lshr(autogen10.getZExtValue());
  }
  APInt autogen12 = autogen5;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen12.clearHighBits(autogen8.getZExtValue());
  else
    autogen12.clearHighBits(autogen8.getBitWidth());
  unsigned autogen13_autocast = autogen11.countl_zero();
  APInt autogen13(autogen11.getBitWidth(),autogen13_autocast);
  APInt autogen14 = autogen9 ? autogen1 : autogen12 ;
  APInt autogen15 = autogen14;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen15.setLowBits(autogen13.getZExtValue());
  else
    autogen15.setLowBits(autogen13.getBitWidth());
  APInt autogen16 = autogen4;
  autogen16.setSignBit();
  APInt autogen17 = autogen16&autogen2;
  APInt autogen18 = ~autogen15;
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" Vec<2> shl_nsw_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  unsigned autogen4_autocast = autogen1.countr_one();
  APInt autogen4(autogen1.getBitWidth(),autogen4_autocast);
  APInt autogen5 = autogen2-autogen3;
  APInt autogen6 = autogen5+autogen3;
  unsigned autogen7_autocast = autogen5.countl_zero();
  APInt autogen7(autogen5.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen6;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen8.clearLowBits(autogen7.getZExtValue());
  else
    autogen8.clearLowBits(autogen7.getBitWidth());
  APInt autogen9 = autogen6;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen9.setLowBits(autogen4.getZExtValue());
  else
    autogen9.setLowBits(autogen4.getBitWidth());
  Vec<2> autogen10 = Vec<2>{autogen9,autogen8};
  return autogen10;
}

extern "C" Vec<2> shl_nsw_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  unsigned autogen3_autocast = autogen2.getBitWidth();
  APInt autogen3(autogen2.getBitWidth(),autogen3_autocast);
  APInt autogen4 = ~autogen1;
  unsigned autogen5_autocast = autogen4.countr_zero();
  APInt autogen5(autogen4.getBitWidth(),autogen5_autocast);
  APInt autogen6 = umin(autogen5,autogen3);
  APInt autogen7 = autogen1;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen7.clearLowBits(autogen3.getZExtValue());
  else
    autogen7.clearLowBits(autogen3.getBitWidth());
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen8 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen8 = autogen2.shl(autogen6.getZExtValue());
  }
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> shl_nsw_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.countl_one();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen4.uge(autogen4.getBitWidth())) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.lshr(autogen4.getZExtValue());
  }
  APInt autogen7;
  if (autogen3 == 0) {
    autogen7 = autogen2;
  } else {
    autogen7 = autogen2.urem(autogen3);
  }
  APInt autogen8 = autogen6;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.clearHighBits(autogen5.getZExtValue());
  else
    autogen8.clearHighBits(autogen5.getBitWidth());
  unsigned autogen9_autocast = autogen2.countl_zero();
  APInt autogen9(autogen2.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen6;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen10.clearHighBits(autogen4.getZExtValue());
  else
    autogen10.clearHighBits(autogen4.getBitWidth());
  APInt autogen11 = autogen8;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen11.clearLowBits(autogen9.getZExtValue());
  else
    autogen11.clearLowBits(autogen9.getBitWidth());
  APInt autogen12 = autogen10+autogen7;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nsw_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen3&autogen3;
  APInt autogen5 = autogen2+autogen3;
  APInt autogen6 = autogen4^autogen5;
  APInt autogen7 = autogen1+autogen4;
  Vec<2> autogen8 = Vec<2>{autogen7,autogen6};
  return autogen8;
}

extern "C" int shl_nsw_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.clearLowBits(autogen5.getZExtValue());
  else
    autogen6.clearLowBits(autogen5.getBitWidth());
  int autogen7 = autogen2.eq(autogen4);
  int autogen8 = autogen5.eq(autogen5);
  int autogen9 = autogen4.eq(autogen6);
  int autogen10 = autogen9^autogen8;
  int autogen11 = autogen7&autogen8;
  int autogen12 = autogen11&autogen10;
  return autogen12;
}

extern "C" Vec<2> shl_nsw_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),1);
  APInt autogen3 = autogen2+autogen2;
  APInt autogen4 = umin(autogen1,autogen1);
  unsigned autogen5_autocast = autogen4.countl_one();
  APInt autogen5(autogen4.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen2.uge(autogen2.getBitWidth())) {
    autogen6 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen6 = autogen1.lshr(autogen2.getZExtValue());
  }
  APInt autogen7 = autogen4;
  autogen7.clearSignBit();
  APInt autogen8 = umax(autogen5,autogen3);
  APInt autogen9 = autogen8+autogen8;
  APInt autogen10 = autogen9+autogen2;
  APInt autogen11 = autogen7;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen11.clearLowBits(autogen10.getZExtValue());
  else
    autogen11.clearLowBits(autogen10.getBitWidth());
  APInt autogen12 = autogen6|autogen4;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nsw_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4(autogen2.getBitWidth(),1);
  unsigned autogen5_autocast = autogen2.getBitWidth();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  unsigned autogen6_autocast = autogen1.countr_zero();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen2&autogen1;
  APInt autogen8 = umin(autogen4,autogen5);
  APInt autogen9 = umin(autogen5,autogen8);
  APInt autogen10;
  if (autogen9.uge(autogen9.getBitWidth()) && autogen7.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen7.getBitWidth());
  } else if (autogen9.uge(autogen9.getBitWidth()) && autogen7.isSignBitClear()) {
    autogen10 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen10 = autogen7.ashr(autogen9.getZExtValue());
  }
  APInt autogen11 = umin(autogen7,autogen10);
  APInt autogen12;
  if (autogen3 == 0) {
    autogen12 = autogen2;
  } else {
    autogen12 = autogen2.srem(autogen3);
  }
  APInt autogen13;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen13 = APInt(autogen11.getBitWidth(), 0);
  } else {
    autogen13 = autogen11.shl(autogen6.getZExtValue());
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_nsw_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = umin(autogen1,autogen2);
  APInt autogen7 = autogen4;
  autogen7.setSignBit();
  APInt autogen8;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen8 = APInt(autogen6.getBitWidth(), 0);
  } else {
    autogen8 = autogen6.shl(autogen5.getZExtValue());
  }
  APInt autogen9;
  if (autogen7 == 0) {
    autogen9 = APInt::getAllOnes(autogen7.getBitWidth());
  } else {
    autogen9 = autogen7.udiv(autogen7);
  }
  unsigned autogen10_autocast = autogen8.countl_zero();
  APInt autogen10(autogen8.getBitWidth(),autogen10_autocast);
  unsigned autogen11_autocast = autogen9.countr_zero();
  APInt autogen11(autogen9.getBitWidth(),autogen11_autocast);
  APInt autogen12;
  if (autogen10.uge(autogen10.getBitWidth()) && autogen3.isSignBitSet()) {
    autogen12 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen10.uge(autogen10.getBitWidth()) && autogen3.isSignBitClear()) {
    autogen12 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen12 = autogen3.ashr(autogen10.getZExtValue());
  }
  APInt autogen13;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen13 = APInt(autogen12.getBitWidth(), 0);
  } else {
    autogen13 = autogen12.lshr(autogen11.getZExtValue());
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_nsw_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  unsigned autogen4_autocast = autogen2.getBitWidth();
  APInt autogen4(autogen2.getBitWidth(),autogen4_autocast);
  APInt autogen5 = autogen2;
  autogen5.clearSignBit();
  APInt autogen6 = autogen3;
  autogen6.clearSignBit();
  unsigned autogen7_autocast = autogen6.countl_zero();
  APInt autogen7(autogen6.getBitWidth(),autogen7_autocast);
  APInt autogen8;
  if (autogen4.uge(autogen4.getBitWidth())) {
    autogen8 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen8 = autogen3.lshr(autogen4.getZExtValue());
  }
  unsigned autogen9_autocast = autogen5.countl_zero();
  APInt autogen9(autogen5.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen6&autogen8;
  APInt autogen11 = autogen8-autogen1;
  APInt autogen12 = autogen10;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen12.clearLowBits(autogen7.getZExtValue());
  else
    autogen12.clearLowBits(autogen7.getBitWidth());
  APInt autogen13;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen13 = APInt(autogen11.getBitWidth(), 0);
  } else {
    autogen13 = autogen11.lshr(autogen9.getZExtValue());
  }
  APInt autogen14;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen14 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen14 = autogen13.lshr(autogen9.getZExtValue());
  }
  APInt autogen15;
  if (autogen8 == 0) {
    autogen15 = autogen12;
  } else {
    autogen15 = autogen12.srem(autogen8);
  }
  APInt autogen16 = autogen14+autogen13;
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> shl_nsw_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nsw_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nsw_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nsw_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_6_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_8_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_9_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsw_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsw_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_nsw_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_nsw_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_nsw_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_nsw_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = shl_nsw_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = shl_nsw_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = shl_nsw_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = shl_nsw_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = shl_nsw_partial_solution_9(autogen0,autogen1);
  Vec<2> autogen12 = meet(autogen2,autogen3);
  Vec<2> autogen13 = meet(autogen12,autogen4);
  Vec<2> autogen14 = meet(autogen13,autogen5);
  Vec<2> autogen15 = meet(autogen14,autogen6);
  Vec<2> autogen16 = meet(autogen15,autogen7);
  Vec<2> autogen17 = meet(autogen16,autogen8);
  Vec<2> autogen18 = meet(autogen17,autogen9);
  Vec<2> autogen19 = meet(autogen18,autogen10);
  Vec<2> autogen20 = meet(autogen19,autogen11);
  return autogen20;
}
