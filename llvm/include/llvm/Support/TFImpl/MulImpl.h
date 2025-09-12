extern "C" Vec<2> mul_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  unsigned autogen6_autocast = autogen1.countr_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen4&autogen2;
  APInt autogen8 = autogen3&autogen5;
  APInt autogen9 = autogen8;
  autogen9.clearSignBit();
  unsigned autogen10_autocast = autogen7.countr_zero();
  APInt autogen10(autogen7.getBitWidth(),autogen10_autocast);
  APInt autogen11;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen11 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen11 = autogen5.lshr(autogen10.getZExtValue());
  }
  APInt autogen12 = autogen9;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen12.setLowBits(autogen6.getZExtValue());
  else
    autogen12.setLowBits(autogen6.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> mul_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen1.countr_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen4 == 0) {
    autogen7 = autogen3;
  } else {
    autogen7 = autogen3.srem(autogen4);
  }
  APInt autogen8 = autogen3^autogen7;
  APInt autogen9 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen9.setHighBits(autogen6.getZExtValue());
  else
    autogen9.setHighBits(autogen6.getBitWidth());
  unsigned autogen10_autocast = autogen9.countr_one();
  APInt autogen10(autogen9.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen8;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen11.clearHighBits(autogen5.getZExtValue());
  else
    autogen11.clearHighBits(autogen5.getBitWidth());
  APInt autogen12 = autogen4;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen12.setLowBits(autogen10.getZExtValue());
  else
    autogen12.setLowBits(autogen10.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> mul_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen1.countl_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen5+autogen3;
  APInt autogen8 = ~autogen2;
  APInt autogen9;
  if (autogen7 == 0) {
    autogen9 = autogen4;
  } else {
    autogen9 = autogen4.srem(autogen7);
  }
  APInt autogen10 = autogen2&autogen9;
  unsigned autogen11_autocast = autogen8.countr_zero();
  APInt autogen11(autogen8.getBitWidth(),autogen11_autocast);
  APInt autogen12 = autogen1;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen12.clearHighBits(autogen11.getZExtValue());
  else
    autogen12.clearHighBits(autogen11.getBitWidth());
  APInt autogen13 = autogen10&autogen2;
  APInt autogen14 = autogen12&autogen5;
  APInt autogen15;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen15 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen15 = autogen13.shl(autogen6.getZExtValue());
  }
  APInt autogen16;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen16 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen16 = autogen14.shl(autogen11.getZExtValue());
  }
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> mul_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  unsigned autogen6_autocast = autogen4.countr_zero();
  APInt autogen6(autogen4.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen7 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen7 = autogen5.lshr(autogen6.getZExtValue());
  }
  unsigned autogen8_autocast = autogen1.countr_one();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen9 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen9 = autogen7.shl(autogen8.getZExtValue());
  }
  APInt autogen10 = autogen9&autogen2;
  APInt autogen11 = autogen3&autogen4;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> mul_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6(autogen3.getBitWidth(),1);
  APInt autogen7 = autogen4;
  autogen7.clearSignBit();
  APInt autogen8 = autogen2*autogen5;
  APInt autogen9;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen9 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen9 = autogen7.shl(autogen6.getZExtValue());
  }
  APInt autogen10 = autogen2&autogen8;
  APInt autogen11 = autogen9&autogen1;
  APInt autogen12;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen12 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen12 = autogen4.lshr(autogen6.getZExtValue());
  }
  APInt autogen13 = autogen11&autogen10;
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> mul_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  unsigned autogen7_autocast = autogen1.countr_one();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
  APInt autogen8;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen8 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen8 = autogen5.shl(autogen7.getZExtValue());
  }
  unsigned autogen9_autocast = autogen3.countr_zero();
  APInt autogen9(autogen3.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen5 == 0) {
    autogen10 = autogen2;
  } else {
    autogen10 = autogen2.urem(autogen5);
  }
  APInt autogen11 = ~autogen10;
  APInt autogen12;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen12 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen12 = autogen8.lshr(autogen9.getZExtValue());
  }
  APInt autogen13 = autogen6;
  autogen13.clearSignBit();
  unsigned autogen14_autocast = autogen11.countr_one();
  APInt autogen14(autogen11.getBitWidth(),autogen14_autocast);
  APInt autogen15 = autogen5;
  if (autogen14.ule(autogen14.getBitWidth()))
    autogen15.clearHighBits(autogen14.getZExtValue());
  else
    autogen15.clearHighBits(autogen14.getBitWidth());
  APInt autogen16;
  if(autogen12.ule(autogen13)){
    autogen16 = autogen12;
  }else{
    autogen16=autogen13;
  }

  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> mul_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.countl_zero();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  APInt autogen7 = ~autogen3;
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.lshr(autogen6.getZExtValue());
  }
  unsigned autogen9_autocast = autogen7.countr_one();
  APInt autogen9(autogen7.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen2&autogen7;
  APInt autogen11 = autogen10&autogen4;
  APInt autogen12 = autogen8&autogen7;
  APInt autogen13 = autogen12;
  autogen13.clearSignBit();
  APInt autogen14 = autogen11;
  autogen14.clearSignBit();
  APInt autogen15 = autogen13;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen15.clearHighBits(autogen5.getZExtValue());
  else
    autogen15.clearHighBits(autogen5.getBitWidth());
  APInt autogen16;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen16 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen16 = autogen14.shl(autogen9.getZExtValue());
  }
  APInt autogen17 = autogen15&autogen1;
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int mul_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = ~autogen3;
  int autogen5 = autogen4.eq(autogen2);
  int autogen6 = autogen2.eq(autogen4);
  int autogen7 = autogen5|autogen6;
  int autogen8 = autogen7&autogen7;
  int autogen9 = autogen8|autogen7;
  return autogen9;
}

extern "C" Vec<2> mul_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),0);
  APInt autogen8(autogen3.getBitWidth(),1);
  unsigned autogen9_autocast = autogen3.getBitWidth();
  APInt autogen9(autogen3.getBitWidth(),autogen9_autocast);
  int autogen10 = autogen9.ule(autogen8);
  APInt autogen11 = autogen1^autogen5;
  APInt autogen12 = autogen11&autogen1;
  APInt autogen13 = autogen10 ? autogen7 : autogen7 ;
  APInt autogen14 = autogen6;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen14.clearLowBits(autogen8.getZExtValue());
  else
    autogen14.clearLowBits(autogen8.getBitWidth());
  int autogen15 = autogen14.ule(autogen2);
  APInt autogen16 = autogen9+autogen13;
  APInt autogen17;
  if (autogen16.uge(autogen16.getBitWidth())) {
    autogen17 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen17 = autogen14.shl(autogen16.getZExtValue());
  }
  APInt autogen18;
  if (autogen1 == 0) {
    autogen18 = autogen17;
  } else {
    autogen18 = autogen17.srem(autogen1);
  }
  APInt autogen19 = autogen15 ? autogen12 : autogen4 ;
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" Vec<2> mul_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),0);
  APInt autogen3(autogen1.getBitWidth(),1);
  APInt autogen4 = autogen3+autogen3;
  APInt autogen5 = autogen2;
  autogen5.setSignBit();
  APInt autogen6 = ~autogen3;
  unsigned autogen7_autocast = autogen4.countr_one();
  APInt autogen7(autogen4.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen1;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen8.clearHighBits(autogen7.getZExtValue());
  else
    autogen8.clearHighBits(autogen7.getBitWidth());
  APInt autogen9 = autogen5^autogen6;
  APInt autogen10 = autogen3&autogen9;
  APInt autogen11 = autogen8&autogen4;
  APInt autogen12 = autogen10;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen12.clearLowBits(autogen7.getZExtValue());
  else
    autogen12.clearLowBits(autogen7.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" int mul_partial_solution_8_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.shl(autogen5.getZExtValue());
  }
  APInt autogen7 = ~autogen6;
  int autogen8 = autogen7.eq(autogen3);
  return autogen8;
}

extern "C" Vec<2> mul_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6(autogen4.getBitWidth(),0);
  unsigned autogen7_autocast = autogen4.getBitWidth();
  APInt autogen7(autogen4.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen1.countr_one();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = autogen3;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen9.setLowBits(autogen8.getZExtValue());
  else
    autogen9.setLowBits(autogen8.getBitWidth());
  APInt autogen10 = autogen7+autogen7;
  APInt autogen11;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen11 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen11 = autogen4.lshr(autogen10.getZExtValue());
  }
  unsigned autogen12_autocast = autogen9.countr_zero();
  APInt autogen12(autogen9.getBitWidth(),autogen12_autocast);
  APInt autogen13 = autogen5|autogen11;
  int autogen14 = autogen10.ule(autogen6);
  APInt autogen15;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen15 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen15 = autogen13.lshr(autogen12.getZExtValue());
  }
  APInt autogen16 = autogen14 ? autogen9 : autogen15 ;
  unsigned autogen17_autocast = autogen13.countl_one();
  APInt autogen17(autogen13.getBitWidth(),autogen17_autocast);
  APInt autogen18 = autogen2*autogen11;
  APInt autogen19 = autogen16;
  if (autogen17.ule(autogen17.getBitWidth()))
    autogen19.clearLowBits(autogen17.getZExtValue());
  else
    autogen19.clearLowBits(autogen17.getBitWidth());
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" int mul_partial_solution_9_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen6 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen6 = autogen4.shl(autogen5.getZExtValue());
  }
  APInt autogen7;
  if (autogen2.isMinSignedValue() && autogen6 == -1) {
    autogen7 = APInt::getSignedMinValue(autogen2.getBitWidth());
  } else if (autogen6 == 0 && autogen2.isNonNegative()) {
    autogen7 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen6 == 0 && autogen2.isNegative()) {
    autogen7 = APInt(autogen2.getBitWidth(), 1);
  } else {
    autogen7 = autogen2.sdiv(autogen6);
  }
  int autogen8 = autogen7.eq(autogen4);
  return autogen8;
}

extern "C" Vec<2> mul_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_5_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = mul_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = mul_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> mul_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> mul_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = mul_partial_solution_8_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = mul_partial_solution_8_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> mul_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = mul_partial_solution_9_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = mul_partial_solution_9_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> mul_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = mul_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = mul_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = mul_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = mul_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = mul_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = mul_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = mul_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = mul_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = mul_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = mul_partial_solution_9(autogen0,autogen1);
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
