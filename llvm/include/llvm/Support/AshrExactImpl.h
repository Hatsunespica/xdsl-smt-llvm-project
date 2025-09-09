extern "C" Vec<2> ashr_exact_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen5_autocast = autogen1.countr_zero();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen3.isSignBitSet()) {
    autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen3.isSignBitClear()) {
    autogen6 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen6 = autogen3.ashr(autogen5.getZExtValue());
  }
  APInt autogen7;
  if (autogen4 == 0) {
    autogen7 = autogen6;
  } else {
    autogen7 = autogen6.urem(autogen4);
  }
  APInt autogen8 = autogen6|autogen7;
  unsigned autogen9_autocast = autogen1.countl_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  unsigned autogen10_autocast = autogen2.countr_one();
  APInt autogen10(autogen2.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen7;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen11.setHighBits(autogen9.getZExtValue());
  else
    autogen11.setHighBits(autogen9.getBitWidth());
  APInt autogen12 = autogen8;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen12.clearHighBits(autogen10.getZExtValue());
  else
    autogen12.clearHighBits(autogen10.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> ashr_exact_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  unsigned autogen6_autocast = autogen4.getBitWidth();
  APInt autogen6(autogen4.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen3.countr_one();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.shl(autogen7.getZExtValue());
  }
  unsigned autogen9_autocast = autogen8.countl_zero();
  APInt autogen9(autogen8.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen10.setLowBits(autogen6.getZExtValue());
  else
    autogen10.setLowBits(autogen6.getBitWidth());
  APInt autogen11;
  if (autogen8 == 0) {
    autogen11 = autogen2;
  } else {
    autogen11 = autogen2.urem(autogen8);
  }
  APInt autogen12 = autogen5;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen12.clearHighBits(autogen9.getZExtValue());
  else
    autogen12.clearHighBits(autogen9.getBitWidth());
  APInt autogen13 = smax(autogen12,autogen4);
  APInt autogen14 = umax(autogen11,autogen2);
  APInt autogen15 = umax(autogen8,autogen5);
  int autogen16 = autogen13.ult(autogen14);
  APInt autogen17 = autogen11*autogen15;
  APInt autogen18 = autogen16 ? autogen1 : autogen10 ;
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int ashr_exact_partial_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = umin(autogen2,autogen2);
  APInt autogen6 = autogen4|autogen5;
  APInt autogen7 = autogen5-autogen3;
  int autogen8 = autogen6.eq(autogen7);
  return autogen8;
}

extern "C" Vec<2> ashr_exact_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),0);
  APInt autogen6(autogen2.getBitWidth(),1);
  unsigned autogen7_autocast = autogen2.getBitWidth();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  int autogen8 = autogen5.ult(autogen7);
  unsigned autogen9_autocast = autogen1.countl_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen2 == 0) {
    autogen10 = autogen2;
  } else {
    autogen10 = autogen2.srem(autogen2);
  }
  APInt autogen11 = autogen8 ? autogen6 : autogen7 ;
  APInt autogen12 = autogen4+autogen2;
  APInt autogen13 = autogen10;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen13.setHighBits(autogen9.getZExtValue());
  else
    autogen13.setHighBits(autogen9.getBitWidth());
  APInt autogen14 = smax(autogen2,autogen1);
  APInt autogen15;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen15 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen15 = autogen13.lshr(autogen11.getZExtValue());
  }
  APInt autogen16;
  if (autogen3 == 0) {
    autogen16 = autogen12;
  } else {
    autogen16 = autogen12.srem(autogen3);
  }
  APInt autogen17;
  if (autogen16 == 0) {
    autogen17 = autogen3;
  } else {
    autogen17 = autogen3.urem(autogen16);
  }
  APInt autogen18 = autogen14*autogen17;
  APInt autogen19;
  if (autogen13 == 0) {
    autogen19 = autogen18;
  } else {
    autogen19 = autogen18.urem(autogen13);
  }
  APInt autogen20;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen20 = APInt(autogen15.getBitWidth(), 0);
  } else {
    autogen20 = autogen15.shl(autogen6.getZExtValue());
  }
  Vec<2> autogen21 = Vec<2>{autogen20,autogen19};
  return autogen21;
}

extern "C" Vec<2> ashr_exact_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  unsigned autogen3_autocast = autogen2.getBitWidth();
  APInt autogen3(autogen2.getBitWidth(),autogen3_autocast);
  APInt autogen4;
  if (autogen3.uge(autogen3.getBitWidth()) && autogen1.isSignBitSet()) {
    autogen4 = APInt::getAllOnes(autogen1.getBitWidth());
  } else if (autogen3.uge(autogen3.getBitWidth()) && autogen1.isSignBitClear()) {
    autogen4 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen4 = autogen1.ashr(autogen3.getZExtValue());
  }
  APInt autogen5 = ~autogen2;
  unsigned autogen6_autocast = autogen2.countl_zero();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen2&autogen5;
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.shl(autogen6.getZExtValue());
  }
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> ashr_exact_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen2;
  autogen3.clearSignBit();
  APInt autogen4 = autogen3*autogen2;
  APInt autogen5 = autogen1|autogen4;
  APInt autogen6 = umin(autogen5,autogen3);
  APInt autogen7;
  if (autogen6 == 0) {
    autogen7 = autogen4;
  } else {
    autogen7 = autogen4.urem(autogen6);
  }
  APInt autogen8;
  if (autogen5 == 0) {
    autogen8 = autogen7;
  } else {
    autogen8 = autogen7.urem(autogen5);
  }
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> ashr_exact_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen1|autogen3;
  APInt autogen8 = autogen4;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen8.setHighBits(autogen6.getZExtValue());
  else
    autogen8.setHighBits(autogen6.getBitWidth());
  int autogen9 = autogen3.eq(autogen4);
  APInt autogen10 = autogen8&autogen2;
  APInt autogen11 = autogen9 ? autogen7 : autogen5 ;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" int ashr_exact_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen4.eq(autogen2);
  int autogen8 = autogen6.ult(autogen5);
  int autogen9 = autogen7&autogen8;
  int autogen10 = autogen7^autogen9;
  return autogen10;
}

extern "C" Vec<2> ashr_exact_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5;
  if (autogen3 == 0) {
    autogen5 = autogen2;
  } else {
    autogen5 = autogen2.urem(autogen3);
  }
  APInt autogen6 = ~autogen2;
  unsigned autogen7_autocast = autogen1.countl_zero();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
  int autogen8 = autogen4.ule(autogen6);
  APInt autogen9;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen9 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen9 = autogen3.shl(autogen7.getZExtValue());
  }
  unsigned autogen10_autocast = autogen5.countl_zero();
  APInt autogen10(autogen5.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen9;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen11.clearLowBits(autogen10.getZExtValue());
  else
    autogen11.clearLowBits(autogen10.getBitWidth());
  APInt autogen12 = autogen8 ? autogen2 : autogen11 ;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> ashr_exact_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  unsigned autogen5_autocast = autogen2.countr_zero();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen4;
  autogen6.setSignBit();
  APInt autogen7 = autogen6&autogen1;
  APInt autogen8 = autogen3;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.clearLowBits(autogen5.getZExtValue());
  else
    autogen8.clearLowBits(autogen5.getBitWidth());
  APInt autogen9 = umin(autogen8,autogen3);
  APInt autogen10 = autogen9|autogen7;
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> ashr_exact_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_exact_partial_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_exact_partial_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_exact_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_exact_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_exact_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_exact_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_6_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_exact_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_exact_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = ashr_exact_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = ashr_exact_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = ashr_exact_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = ashr_exact_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = ashr_exact_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = ashr_exact_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = ashr_exact_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = meet(autogen2,autogen3);
  Vec<2> autogen11 = meet(autogen10,autogen4);
  Vec<2> autogen12 = meet(autogen11,autogen5);
  Vec<2> autogen13 = meet(autogen12,autogen6);
  Vec<2> autogen14 = meet(autogen13,autogen7);
  Vec<2> autogen15 = meet(autogen14,autogen8);
  Vec<2> autogen16 = meet(autogen15,autogen9);
  return autogen16;
}
