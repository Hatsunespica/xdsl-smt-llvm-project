extern "C" Vec<2> shl_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),1);
  APInt autogen3 = APInt::getAllOnes(autogen1.getBitWidth());
  APInt autogen4(autogen1.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.countl_zero();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2-autogen1;
  APInt autogen7;
  if (autogen1 == 0) {
    autogen7 = autogen6;
  } else {
    autogen7 = autogen6.urem(autogen1);
  }
  APInt autogen8 = autogen7;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen8.clearLowBits(autogen4.getZExtValue());
  else
    autogen8.clearLowBits(autogen4.getBitWidth());
  APInt autogen9 = umin(autogen1,autogen8);
  APInt autogen10;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen9.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen9.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen9.isSignBitClear()) {
    autogen10 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen10 = autogen9.ashr(autogen5.getZExtValue());
  }
  APInt autogen11 = autogen3;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen11.clearHighBits(autogen5.getZExtValue());
  else
    autogen11.clearHighBits(autogen5.getBitWidth());
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> shl_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4(autogen2.getBitWidth(),1);
  unsigned autogen5_autocast = autogen2.getBitWidth();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  unsigned autogen6_autocast = autogen1.countr_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3-autogen2;
  APInt autogen8 = autogen7*autogen2;
  int autogen9 = autogen6.eq(autogen4);
  APInt autogen10;
  if (autogen1 == 0) {
    autogen10 = autogen3;
  } else {
    autogen10 = autogen3.urem(autogen1);
  }
  APInt autogen11 = autogen7;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen11.clearLowBits(autogen6.getZExtValue());
  else
    autogen11.clearLowBits(autogen6.getBitWidth());
  APInt autogen12 = autogen9 ? autogen6 : autogen5 ;
  APInt autogen13 = autogen8;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.clearLowBits(autogen12.getZExtValue());
  else
    autogen13.clearLowBits(autogen12.getBitWidth());
  APInt autogen14 = umax(autogen2,autogen3);
  APInt autogen15 = autogen11-autogen13;
  APInt autogen16;
  if (autogen15 == 0) {
    autogen16 = autogen14;
  } else {
    autogen16 = autogen14.srem(autogen15);
  }
  APInt autogen17;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen17 = APInt(autogen10.getBitWidth(), 0);
  } else {
    autogen17 = autogen10.lshr(autogen12.getZExtValue());
  }
  APInt autogen18 = autogen16-autogen8;
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" Vec<2> shl_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  unsigned autogen4_autocast = autogen2.getBitWidth();
  APInt autogen4(autogen2.getBitWidth(),autogen4_autocast);
  APInt autogen5;
  if (autogen3.uge(autogen3.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen3.uge(autogen3.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen5 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen5 = autogen2.ashr(autogen3.getZExtValue());
  }
  unsigned autogen6_autocast = autogen5.countr_zero();
  APInt autogen6(autogen5.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen1;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen7.clearLowBits(autogen4.getZExtValue());
  else
    autogen7.clearLowBits(autogen4.getBitWidth());
  APInt autogen8 = autogen6+autogen6;
  APInt autogen9 = autogen5;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen9.setLowBits(autogen8.getZExtValue());
  else
    autogen9.setLowBits(autogen8.getBitWidth());
  APInt autogen10;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen7.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen7.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen7.isSignBitClear()) {
    autogen10 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen10 = autogen7.ashr(autogen6.getZExtValue());
  }
  APInt autogen11 = smin(autogen5,autogen5);
  APInt autogen12;
  if (autogen11 == 0) {
    autogen12 = autogen10;
  } else {
    autogen12 = autogen10.urem(autogen11);
  }
  APInt autogen13;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen13 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen13 = autogen9.shl(autogen8.getZExtValue());
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8 = umin(autogen2,autogen1);
  APInt autogen9 = autogen1;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen9.setHighBits(autogen6.getZExtValue());
  else
    autogen9.setHighBits(autogen6.getBitWidth());
  APInt autogen10;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen4.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen4.isSignBitClear()) {
    autogen10 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen10 = autogen4.ashr(autogen5.getZExtValue());
  }
  APInt autogen11;
  if (autogen4 == 0) {
    autogen11 = autogen9;
  } else {
    autogen11 = autogen9.urem(autogen4);
  }
  unsigned autogen12_autocast = autogen3.countl_zero();
  APInt autogen12(autogen3.getBitWidth(),autogen12_autocast);
  APInt autogen13;
  if (autogen9 == 0) {
    autogen13 = APInt::getAllOnes(autogen8.getBitWidth());
  } else {
    autogen13 = autogen8.udiv(autogen9);
  }
  unsigned autogen14_autocast = autogen11.countr_one();
  APInt autogen14(autogen11.getBitWidth(),autogen14_autocast);
  APInt autogen15 = autogen12-autogen14;
  APInt autogen16 = autogen13;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen16.clearLowBits(autogen7.getZExtValue());
  else
    autogen16.clearLowBits(autogen7.getBitWidth());
  APInt autogen17 = autogen10;
  if (autogen15.ule(autogen15.getBitWidth()))
    autogen17.clearHighBits(autogen15.getZExtValue());
  else
    autogen17.clearHighBits(autogen15.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" Vec<2> shl_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8 = umin(autogen7,autogen6);
  APInt autogen9 = autogen3;
  autogen9.setSignBit();
  unsigned autogen10_autocast = autogen9.countr_one();
  APInt autogen10(autogen9.getBitWidth(),autogen10_autocast);
  APInt autogen11;
  if (autogen3 == 0) {
    autogen11 = autogen4;
  } else {
    autogen11 = autogen4.srem(autogen3);
  }
  unsigned autogen12_autocast = autogen3.countr_one();
  APInt autogen12(autogen3.getBitWidth(),autogen12_autocast);
  APInt autogen13;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen13 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen13 = autogen1.shl(autogen10.getZExtValue());
  }
  int autogen14 = autogen10.ule(autogen8);
  APInt autogen15;
  if (autogen11 == 0) {
    autogen15 = autogen13;
  } else {
    autogen15 = autogen13.urem(autogen11);
  }
  APInt autogen16 = autogen14 ? autogen5 : autogen12 ;
  APInt autogen17;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen17 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen17 = autogen2.shl(autogen12.getZExtValue());
  }
  APInt autogen18 = autogen15;
  if (autogen16.ule(autogen16.getBitWidth()))
    autogen18.clearLowBits(autogen16.getZExtValue());
  else
    autogen18.clearLowBits(autogen16.getBitWidth());
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int shl_partial_solution_4_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7 = umax(autogen3,autogen2);
  int autogen8 = autogen7.eq(autogen6);
  int autogen9 = autogen5.ule(autogen7);
  int autogen10 = autogen8&autogen9;
  int autogen11 = autogen10|autogen8;
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.getBitWidth();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = smin(autogen2,autogen1);
  APInt autogen8;
  if (autogen2 == 0) {
    autogen8 = APInt::getAllOnes(autogen4.getBitWidth());
  } else {
    autogen8 = autogen4.udiv(autogen2);
  }
  APInt autogen9 = autogen1^autogen7;
  APInt autogen10 = autogen3;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen10.clearHighBits(autogen5.getZExtValue());
  else
    autogen10.clearHighBits(autogen5.getBitWidth());
  APInt autogen11;
  if (autogen2 == 0) {
    autogen11 = APInt::getAllOnes(autogen8.getBitWidth());
  } else {
    autogen11 = autogen8.udiv(autogen2);
  }
  APInt autogen12;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen12 = APInt(autogen10.getBitWidth(), 0);
  } else {
    autogen12 = autogen10.lshr(autogen6.getZExtValue());
  }
  APInt autogen13;
  if (autogen11 == 0) {
    autogen13 = APInt::getAllOnes(autogen9.getBitWidth());
  } else {
    autogen13 = autogen9.udiv(autogen11);
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  int autogen8 = autogen6.ule(autogen2);
  APInt autogen9 = autogen8 ? autogen5 : autogen6 ;
  APInt autogen10 = autogen9;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen10.setLowBits(autogen7.getZExtValue());
  else
    autogen10.setLowBits(autogen7.getBitWidth());
  unsigned autogen11_autocast = autogen4.countr_one();
  APInt autogen11(autogen4.getBitWidth(),autogen11_autocast);
  APInt autogen12;
  if (autogen10 == 0) {
    autogen12 = autogen5;
  } else {
    autogen12 = autogen5.srem(autogen10);
  }
  unsigned autogen13_autocast = autogen9.countr_one();
  APInt autogen13(autogen9.getBitWidth(),autogen13_autocast);
  APInt autogen14 = autogen1+autogen12;
  APInt autogen15 = autogen3;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen15.clearLowBits(autogen13.getZExtValue());
  else
    autogen15.clearLowBits(autogen13.getBitWidth());
  APInt autogen16;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen16 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen16 = autogen14.shl(autogen11.getZExtValue());
  }
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" int shl_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setHighBits(autogen5.getZExtValue());
  else
    autogen6.setHighBits(autogen5.getBitWidth());
  int autogen7 = autogen4.eq(autogen6);
  int autogen8 = autogen7&autogen7;
  int autogen9 = autogen7|autogen8;
  return autogen9;
}

extern "C" Vec<2> shl_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen2.countl_zero();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen1;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen8.setHighBits(autogen6.getZExtValue());
  else
    autogen8.setHighBits(autogen6.getBitWidth());
  APInt autogen9 = autogen3;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen9.clearHighBits(autogen7.getZExtValue());
  else
    autogen9.clearHighBits(autogen7.getBitWidth());
  APInt autogen10;
  if (autogen9.isMinSignedValue() && autogen9 == -1) {
    autogen10 = APInt::getSignedMinValue(autogen9.getBitWidth());
  } else if (autogen9 == 0 && autogen9.isNonNegative()) {
    autogen10 = APInt::getAllOnes(autogen9.getBitWidth());
  } else if (autogen9 == 0 && autogen9.isNegative()) {
    autogen10 = APInt(autogen9.getBitWidth(), 1);
  } else {
    autogen10 = autogen9.sdiv(autogen9);
  }
  unsigned autogen11_autocast = autogen9.countr_zero();
  APInt autogen11(autogen9.getBitWidth(),autogen11_autocast);
  APInt autogen12;
  if (autogen10 == 0) {
    autogen12 = APInt::getAllOnes(autogen3.getBitWidth());
  } else {
    autogen12 = autogen3.udiv(autogen10);
  }
  APInt autogen13;
  if (autogen8 == 0) {
    autogen13 = autogen4;
  } else {
    autogen13 = autogen4.urem(autogen8);
  }
  APInt autogen14 = autogen13;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen14.setLowBits(autogen11.getZExtValue());
  else
    autogen14.setLowBits(autogen11.getBitWidth());
  APInt autogen15;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen15 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen15 = autogen2.shl(autogen5.getZExtValue());
  }
  unsigned autogen16_autocast = autogen14.countl_zero();
  APInt autogen16(autogen14.getBitWidth(),autogen16_autocast);
  APInt autogen17 = autogen15*autogen12;
  APInt autogen18 = autogen1;
  if (autogen16.ule(autogen16.getBitWidth()))
    autogen18.clearHighBits(autogen16.getZExtValue());
  else
    autogen18.clearHighBits(autogen16.getBitWidth());
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int shl_partial_solution_7_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5 = autogen2;
  autogen5.setSignBit();
  int autogen6 = autogen4.ule(autogen5);
  return autogen6;
}

extern "C" Vec<2> shl_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),0);
  APInt autogen7(autogen3.getBitWidth(),1);
  unsigned autogen8_autocast = autogen3.getBitWidth();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  int autogen9 = autogen8.ult(autogen6);
  int autogen10 = autogen3.eq(autogen2);
  unsigned autogen11_autocast = autogen1.countl_one();
  APInt autogen11(autogen1.getBitWidth(),autogen11_autocast);
  APInt autogen12;
  if (autogen1 == 0) {
    autogen12 = APInt::getAllOnes(autogen1.getBitWidth());
  } else {
    autogen12 = autogen1.udiv(autogen1);
  }
  APInt autogen13 = autogen4;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen13.setLowBits(autogen8.getZExtValue());
  else
    autogen13.setLowBits(autogen8.getBitWidth());
  APInt autogen14 = umax(autogen7,autogen11);
  APInt autogen15 = autogen9 ? autogen14 : autogen7 ;
  APInt autogen16 = autogen13*autogen2;
  APInt autogen17 = smax(autogen12,autogen3);
  APInt autogen18 = autogen17-autogen5;
  APInt autogen19 = autogen10 ? autogen15 : autogen8 ;
  APInt autogen20 = smax(autogen16,autogen12);
  APInt autogen21 = autogen20;
  if (autogen19.ule(autogen19.getBitWidth()))
    autogen21.clearLowBits(autogen19.getZExtValue());
  else
    autogen21.clearLowBits(autogen19.getBitWidth());
  APInt autogen22 = autogen17*autogen18;
  Vec<2> autogen23 = Vec<2>{autogen22,autogen21};
  return autogen23;
}

extern "C" Vec<2> shl_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),1);
  unsigned autogen8_autocast = autogen3.getBitWidth();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umin(autogen7,autogen8);
  APInt autogen10;
  if (autogen3 == 0) {
    autogen10 = autogen1;
  } else {
    autogen10 = autogen1.urem(autogen3);
  }
  APInt autogen11 = autogen5;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen11.clearLowBits(autogen7.getZExtValue());
  else
    autogen11.clearLowBits(autogen7.getBitWidth());
  APInt autogen12 = autogen5&autogen10;
  APInt autogen13 = smax(autogen4,autogen6);
  int autogen14 = autogen8.eq(autogen9);
  APInt autogen15 = umin(autogen1,autogen11);
  APInt autogen16;
  if (autogen3 == 0) {
    autogen16 = APInt::getAllOnes(autogen13.getBitWidth());
  } else {
    autogen16 = autogen13.udiv(autogen3);
  }
  APInt autogen17 = ~autogen16;
  unsigned autogen18_autocast = autogen2.countr_zero();
  APInt autogen18(autogen2.getBitWidth(),autogen18_autocast);
  APInt autogen19 = smin(autogen12,autogen1);
  APInt autogen20 = autogen14 ? autogen12 : autogen19 ;
  int autogen21 = autogen18.ule(autogen18);
  APInt autogen22 = smax(autogen12,autogen1);
  APInt autogen23 = autogen21 ? autogen15 : autogen22 ;
  APInt autogen24 = umax(autogen20,autogen17);
  Vec<2> autogen25 = Vec<2>{autogen24,autogen23};
  return autogen25;
}

extern "C" int shl_partial_solution_9_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5 = autogen2;
  autogen5.setSignBit();
  int autogen6 = autogen5.eq(autogen4);
  return autogen6;
}

extern "C" Vec<2> shl_partial_solution_10_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2 = APInt::getAllOnes(autogen1.getBitWidth());
  APInt autogen3(autogen1.getBitWidth(),1);
  APInt autogen4 = autogen1;
  if (autogen3.ule(autogen3.getBitWidth()))
    autogen4.clearHighBits(autogen3.getZExtValue());
  else
    autogen4.clearHighBits(autogen3.getBitWidth());
  APInt autogen5 = autogen2+autogen4;
  APInt autogen6;
  if (autogen5 == 0) {
    autogen6 = autogen2;
  } else {
    autogen6 = autogen2.urem(autogen5);
  }
  APInt autogen7 = autogen1;
  autogen7.clearSignBit();
  APInt autogen8 = autogen6*autogen7;
  APInt autogen9;
  if (autogen7 == 0) {
    autogen9 = autogen8;
  } else {
    autogen9 = autogen8.srem(autogen7);
  }
  APInt autogen10 = smax(autogen2,autogen1);
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_partial_solution_4_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_partial_solution_4_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_5_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_partial_solution_7_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_partial_solution_7_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_8_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_partial_solution_9_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_partial_solution_9_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_partial_solution_10(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_10_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = shl_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = shl_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = shl_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = shl_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = shl_partial_solution_9(autogen0,autogen1);
  Vec<2> autogen12 = shl_partial_solution_10(autogen0,autogen1);
  Vec<2> autogen13 = meet(autogen2,autogen3);
  Vec<2> autogen14 = meet(autogen13,autogen4);
  Vec<2> autogen15 = meet(autogen14,autogen5);
  Vec<2> autogen16 = meet(autogen15,autogen6);
  Vec<2> autogen17 = meet(autogen16,autogen7);
  Vec<2> autogen18 = meet(autogen17,autogen8);
  Vec<2> autogen19 = meet(autogen18,autogen9);
  Vec<2> autogen20 = meet(autogen19,autogen10);
  Vec<2> autogen21 = meet(autogen20,autogen11);
  Vec<2> autogen22 = meet(autogen21,autogen12);
  return autogen22;
}
