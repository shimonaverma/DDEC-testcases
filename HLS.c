
int
__attribute__ ((noinline))
target (int in1, int in2, int in3, int in4, int in7, int in8, int in9, 
          int in10, int in14, int in15, int in12, int in17, int in19, int in20,
          int in22, int in24, int in27, int in28, int in29, int in32)
{
 int out13, out30, out31; /* outputs */
 int t5, t6, t11, t16, t18, t21, t23, t25, t26;
 
 out30 = 0;
 t5 = in3 - in4;      /* b */
 t6 = in7 + in8;      /* a */
 out13 = in14 - in15;   /* k - output node */
 t11 = t6 + in12;    /* d */
 if (in2 == in1)	    /* p */
  t16 = t11 - in17;  /* f */
 else
 {
  t18 = in19 + in20;  /* c */
  if (in9 < in10)     /* q */
  {
   t21 = t11 + in22; /* g */
   t23 = t5 - in24;  /* e */
   t25 = t21 + t23; /* i */
   t26 = t25 + in27; /* j */
  }
  else
   t26 = t5 + t18;  /* h */
  t16 = t26 - in28;  /* m */
  out30 = t26 + in29;  /* l - output node  */
 }
 out31 = t16 + in32;   /* n - output node  */
 return out13 + out30 + out31;
}

int
__attribute__ ((noinline))
rewrite (int in1, int in2, int in3, int in4, int in7, int in8, int in9, int in10, int in14, int in15, int in12, int in17, int in19, int in20, int in22, int in24, int in27, int in28, int in29, int in32)
{
  int return_port;
  unsigned int reg_4, reg_4_in;
  unsigned int reg_5, reg_5_in;
  unsigned int reg_6, reg_6_in;
  unsigned int reg_1, reg_1_in;
  unsigned int reg_0, reg_0_in;
  unsigned int reg_7, reg_7_in;
  unsigned int reg_3, reg_3_in;
  unsigned int reg_2, reg_2_in;
  unsigned int reg_8, reg_8_in;

  goto S_0;

S_0:
  if (((in2 == in1) == 1) == 1)  {
    reg_4_in = reg_4;
    reg_5_in = reg_5;
    reg_6_in = reg_6;
    reg_1_in = reg_1;
    reg_0_in = reg_0;
    reg_7_in = reg_7;
    reg_3_in = reg_3;
    reg_2_in = reg_2;
    reg_8_in = reg_8;
    reg_6 = in8 + in12 + in7;
    reg_1 = in14 - in15;
    goto S_1;
  }
  if (((in2 == in1) == 1) == 0)  {
    reg_4_in = reg_4;
    reg_5_in = reg_5;
    reg_6_in = reg_6;
    reg_1_in = reg_1;
    reg_0_in = reg_0;
    reg_7_in = reg_7;
    reg_3_in = reg_3;
    reg_2_in = reg_2;
    reg_8_in = reg_8;
    reg_0 = in3 - in4;
    reg_7 = in3 - in4;
    reg_3 = in9 < in10;
    reg_2 = (in8 + in12 + in7) + in27;
    reg_1 = in14 - in15;
    goto S_2;
  }

S_2:
  if ((reg_3 == 1) == 0)  {
    reg_4_in = reg_4;
    reg_5_in = reg_5;
    reg_6_in = reg_6;
    reg_1_in = reg_1;
    reg_0_in = reg_0;
    reg_7_in = reg_7;
    reg_3_in = reg_3;
    reg_2_in = reg_2;
    reg_8_in = reg_8;
    reg_5 = in19 + in20 + reg_7_in;
    goto S_4;
  }
  if ((reg_3 == 1) == 1)  {
    reg_4_in = reg_4;
    reg_5_in = reg_5;
    reg_6_in = reg_6;
    reg_1_in = reg_1;
    reg_0_in = reg_0;
    reg_7_in = reg_7;
    reg_3_in = reg_3;
    reg_2_in = reg_2;
    reg_8_in = reg_8;
    reg_4 = in22 - in24 + reg_2_in;
    goto S_3;
  }

S_3:
  reg_4_in = reg_4;
  reg_5_in = reg_5;
  reg_6_in = reg_6;
  reg_1_in = reg_1;
  reg_0_in = reg_0;
  reg_7_in = reg_7;
  reg_3_in = reg_3;
  reg_2_in = reg_2;
  reg_8_in = reg_8;
  reg_5 = reg_4_in + reg_0_in;
  goto S_4;

S_4:
  reg_4_in = reg_4;
  reg_5_in = reg_5;
  reg_6_in = reg_6;
  reg_1_in = reg_1;
  reg_0_in = reg_0;
  reg_7_in = reg_7;
  reg_3_in = reg_3;
  reg_2_in = reg_2;
  reg_8_in = reg_8;
  reg_7 = reg_5_in + in29;
  reg_8 = reg_5_in - in28;
  goto S_5;

S_1:
  reg_4_in = reg_4;
  reg_5_in = reg_5;
  reg_6_in = reg_6;
  reg_1_in = reg_1;
  reg_0_in = reg_0;
  reg_7_in = reg_7;
  reg_3_in = reg_3;
  reg_2_in = reg_2;
  reg_8_in = reg_8;
  reg_7 = 0;
  reg_8 = reg_6_in - in17;
  goto S_5;

S_5:
  reg_4_in = reg_4;
  reg_5_in = reg_5;
  reg_6_in = reg_6;
  reg_1_in = reg_1;
  reg_0_in = reg_0;
  reg_7_in = reg_7;
  reg_3_in = reg_3;
  reg_2_in = reg_2;
  reg_8_in = reg_8;
  return_port = (reg_1_in + reg_8_in + reg_7_in) + in32;
  return return_port;
}



int main (int argc, char* argv[])
{
    return 0;
}

