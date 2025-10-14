extern "C" Vec<2> shl_nsuw_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.countr_one();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2|autogen4;
  unsigned autogen7_autocast = autogen6.countl_zero();
  APInt autogen7(autogen6.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen3;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.setLowBits(autogen5.getZExtValue());
  else
    autogen8.setLowBits(autogen5.getBitWidth());
  APInt autogen9 = umin(autogen3,autogen3);
  APInt autogen10 = autogen9;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen10.clearLowBits(autogen7.getZExtValue());
  else
    autogen10.clearLowBits(autogen7.getBitWidth());
  APInt autogen11 = autogen8;
  autogen11.clearSignBit();
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}
extern "C" Vec<2> shl_nsuw_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6 = autogen1|autogen3;
  int autogen7 = autogen6.eq(autogen2);
  unsigned autogen8_autocast = autogen1.countl_zero();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9;
  if (autogen6 == 0) {
    autogen9 = autogen4;
  } else {
    autogen9 = autogen4.srem(autogen6);
  }
  APInt autogen10 = autogen7 ? autogen5 : autogen8 ;
  APInt autogen11 = smin(autogen1,autogen3);
  APInt autogen12;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen12 = APInt(autogen11.getBitWidth(), 0);
  } else {
    autogen12 = autogen11.lshr(autogen10.getZExtValue());
  }
  APInt autogen13;
  if (autogen9 == 0) {
    autogen13 = autogen3;
  } else {
    autogen13 = autogen3.srem(autogen9);
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_nsuw_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.countr_zero();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3&autogen4;
  APInt autogen8;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.lshr(autogen5.getZExtValue());
  }
  unsigned autogen9_autocast = autogen1.countl_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen10 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen10 = autogen2.ashr(autogen9.getZExtValue());
  }
  APInt autogen11 = autogen3|autogen10;
  APInt autogen12 = autogen8;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen12.clearLowBits(autogen6.getZExtValue());
  else
    autogen12.clearLowBits(autogen6.getBitWidth());
  APInt autogen13 = autogen3|autogen7;
  APInt autogen14 = smax(autogen3,autogen13);
  APInt autogen15 = umax(autogen14,autogen13);
  unsigned autogen16_autocast = autogen15.countr_one();
  APInt autogen16(autogen15.getBitWidth(),autogen16_autocast);
  APInt autogen17 = autogen15;
  autogen17.setSignBit();
  int autogen18 = autogen2.eq(autogen11);
  APInt autogen19;
  if (autogen16.uge(autogen16.getBitWidth())) {
    autogen19 = APInt(autogen12.getBitWidth(), 0);
  } else {
    autogen19 = autogen12.shl(autogen16.getZExtValue());
  }
  APInt autogen20 = autogen18 ? autogen14 : autogen17 ;
  Vec<2> autogen21 = Vec<2>{autogen20,autogen19};
  return autogen21;
}

extern "C" Vec<2> shl_nsuw_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5 = autogen4+autogen4;
  APInt autogen6;
  if (autogen2 == 0) {
    autogen6 = autogen1;
  } else {
    autogen6 = autogen1.urem(autogen2);
  }
  APInt autogen7 = autogen3|autogen2;
  unsigned autogen8_autocast = autogen2.countl_zero();
  APInt autogen8(autogen2.getBitWidth(),autogen8_autocast);
  APInt autogen9 = autogen7;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen9.clearLowBits(autogen8.getZExtValue());
  else
    autogen9.clearLowBits(autogen8.getBitWidth());
  APInt autogen10 = autogen6*autogen9;
  APInt autogen11;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen11 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen11 = autogen5.lshr(autogen8.getZExtValue());
  }
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> shl_nsuw_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.countl_zero();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3|autogen1;
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen8 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen8 = autogen3.lshr(autogen6.getZExtValue());
  }
  APInt autogen9;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen9 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen9 = autogen4.lshr(autogen5.getZExtValue());
  }
  unsigned autogen10_autocast = autogen9.countr_one();
  APInt autogen10(autogen9.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen3;
  autogen11.setSignBit();
  APInt autogen12 = autogen11;
  autogen12.setSignBit();
  APInt autogen13 = autogen12&autogen7;
  APInt autogen14 = autogen8&autogen7;
  APInt autogen15 = autogen13;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen15.clearHighBits(autogen10.getZExtValue());
  else
    autogen15.clearHighBits(autogen10.getBitWidth());
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> shl_nsuw_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4;
  if (autogen2 == 0) {
    autogen4 = autogen3;
  } else {
    autogen4 = autogen3.urem(autogen2);
  }
  unsigned autogen5_autocast = autogen4.countr_one();
  APInt autogen5(autogen4.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.lshr(autogen5.getZExtValue());
  }
  APInt autogen7 = autogen6;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen7.clearHighBits(autogen5.getZExtValue());
  else
    autogen7.clearHighBits(autogen5.getBitWidth());
  APInt autogen8 = autogen1|autogen3;
  APInt autogen9 = autogen8+autogen4;
  APInt autogen10 = autogen7;
  autogen10.clearSignBit();
  APInt autogen11 = umin(autogen2,autogen10);
  APInt autogen12 = autogen9|autogen1;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" int shl_nsuw_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  int autogen5 = autogen4.ule(autogen2);
  return autogen5;
}

extern "C" Vec<2> shl_nsuw_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen3.countl_zero();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen1;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.clearHighBits(autogen5.getZExtValue());
  else
    autogen8.clearHighBits(autogen5.getBitWidth());
  unsigned autogen9_autocast = autogen1.countr_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen10 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen10 = autogen2.ashr(autogen6.getZExtValue());
  }
  int autogen11 = autogen7.ule(autogen9);
  APInt autogen12 = autogen11 ? autogen8 : autogen4 ;
  APInt autogen13 = autogen1;
  autogen13.setSignBit();
  APInt autogen14 = autogen13;
  autogen14.setSignBit();
  APInt autogen15;
  if (autogen12 == 0) {
    autogen15 = autogen10;
  } else {
    autogen15 = autogen10.urem(autogen12);
  }
  APInt autogen16 = autogen14;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen16.clearLowBits(autogen7.getZExtValue());
  else
    autogen16.clearLowBits(autogen7.getBitWidth());
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> shl_nsuw_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen4 = smax(autogen2,autogen3);
  APInt autogen5 = autogen4*autogen1;
  unsigned autogen6_autocast = autogen5.countl_zero();
  APInt autogen6(autogen5.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen7 = APInt(autogen2.getBitWidth(), -1);
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen7 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen7 = autogen2.ashr(autogen6.getZExtValue());
  }
  APInt autogen8 = autogen7|autogen4;
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> shl_nsuw_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),0);
  APInt autogen6(autogen2.getBitWidth(),1);
  APInt autogen7 = smin(autogen2,autogen2);
  unsigned autogen8_autocast = autogen1.countl_one();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = autogen3|autogen3;
  APInt autogen10 = ~autogen7;
  int autogen11 = autogen5.ule(autogen5);
  APInt autogen12 = umax(autogen7,autogen3);
  APInt autogen13 = autogen11 ? autogen2 : autogen9 ;
  APInt autogen14 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen14.setLowBits(autogen6.getZExtValue());
  else
    autogen14.setLowBits(autogen6.getBitWidth());
  unsigned autogen15_autocast = autogen10.countl_one();
  APInt autogen15(autogen10.getBitWidth(),autogen15_autocast);
  APInt autogen16 = autogen12+autogen4;
  APInt autogen17 = autogen16;
  if (autogen15.ule(autogen15.getBitWidth()))
    autogen17.clearLowBits(autogen15.getZExtValue());
  else
    autogen17.clearLowBits(autogen15.getBitWidth());
  APInt autogen18 = autogen17;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen18.clearHighBits(autogen8.getZExtValue());
  else
    autogen18.clearHighBits(autogen8.getBitWidth());
  APInt autogen19 = umin(autogen13,autogen14);
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
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

extern "C" Vec<2> shl_nsuw_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nsuw_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nsuw_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nsuw_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_6_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_8_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_nsuw_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_nsuw_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_nsuw_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_nsuw_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = shl_nsuw_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = shl_nsuw_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = shl_nsuw_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = shl_nsuw_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = meet(autogen2,autogen3);
  Vec<2> autogen12 = meet(autogen11,autogen4);
  Vec<2> autogen13 = meet(autogen12,autogen5);
  Vec<2> autogen14 = meet(autogen13,autogen6);
  Vec<2> autogen15 = meet(autogen14,autogen7);
  Vec<2> autogen16 = meet(autogen15,autogen8);
  Vec<2> autogen17 = meet(autogen16,autogen9);
  Vec<2> autogen18 = meet(autogen17,autogen10);
  return autogen18;
}
