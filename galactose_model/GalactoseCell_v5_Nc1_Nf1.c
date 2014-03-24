#ifdef SIZE_DEFINITIONS
#define N_METABS 19
#define N_ODE_METABS 0
#define N_INDEP_METABS 14
#define N_COMPARTMENTS 2
#define N_GLOBAL_PARAMS 130
#define N_KIN_PARAMS 0
#define N_REACTIONS 18

#define N_ARRAY_SIZE_P  96	// number of parameters
#define N_ARRAY_SIZE_X  15	// number of initials
#define N_ARRAY_SIZE_Y  40	// number of assigned elements
#define N_ARRAY_SIZE_XC 15	// number of x concentration
#define N_ARRAY_SIZE_PC 0	// number of p concentration
#define N_ARRAY_SIZE_YC 4	// number of y concentration
#define N_ARRAY_SIZE_DX 15	// number of ODEs 
#define N_ARRAY_SIZE_CT 4	// number of conserved totals

#endif // SIZE_DEFINITIONS

#ifdef TIME
#define T  <set here a user name for the time variable> 
#endif // TIME

#ifdef NAME_ARRAYS
const char* p_names[] = {"L", "y_sin", "y_dis", "y_cell", "flow_sin", "Nc", "Nf", "scale_f", "REF_P", "deficiency", "GALK_PA", "GALK_keq", "GALK_k_gal1p", "GALK_k_adp", "GALK_ki_gal1p", "GALK_kcat", "GALK_k_gal", "GALK_k_atp", "H01__GALK_P", "IMP_f", "IMP_k_gal1p", "H01__IMP_P", "ATPS_f", "ATPS_keq", "ATPS_k_adp", "ATPS_k_atp", "ATPS_k_phos", "H01__ATPS_P", "ALDR_f", "ALDR_keq", "ALDR_k_gal", "ALDR_k_galtol", "ALDR_k_nadp", "ALDR_k_nadph", "H01__ALDR_P", "NADPR_f", "NADPR_keq", "NADPR_k_nadp", "NADPR_ki_nadph", "H01__NADPR_P", "GALT_f", "GALT_keq", "GALT_k_glc1p", "GALT_k_udpgal", "GALT_ki_utp", "GALT_ki_udp", "GALT_vm", "GALT_k_gal1p", "GALT_k_udpglc", "H01__GALT_P", "GALE_f", "GALE_PA", "GALE_kcat", "GALE_keq", "GALE_k_udpglc", "GALE_k_udpgal", "H01__GALE_P", "UGP_f", "UGALP_f", "UGP_keq", "UGP_k_utp", "UGP_k_glc1p", "UGP_k_udpglc", "UGP_k_ppi", "UGP_k_gal1p", "UGP_k_udpgal", "UGP_ki_utp", "UGP_ki_udpglc", "H01__UGP_P", "PPASE_f", "PPASE_k_ppi", "PPASE_n", "H01__PPASE_P", "NDKU_f", "NDKU_keq", "NDKU_k_atp", "NDKU_k_adp", "NDKU_k_utp", "NDKU_k_udp", "H01__NDKU_P", "PGM1_f", "PGM1_keq", "PGM1_k_glc6p", "PGM1_k_glc1p", "H01__PGM1_P", "GLY_f", "GLY_k_glc6p", "GLY_k_p", "H01__GLY_P", "GTF_f", "GTF_k_udpgal", "GTF_k_udpglc", "H01__GTF_P", "GLUT2_f", "GLUT2_k_gal", "H01__GLUT2_P",  "" };
const char* x_names[] = {"Phosphate", "D-galactose-1-phosphate", "UDP-D-glucose", "D-galactose", "ATP", "UDP", "D-glucose-1-phosphate", "NADP", "D-galactose M", "UTP", "D-glucose-6-phosphate", "gal", "D-galactitol", "galM", "H2O M",  "" };
const char* y_names[] = {"Pyrophosphate", "NADPH", "ADP", "UDP-D-galactose", "[D001] Disse Space 1", "[H01] Hepatocyte 1", "Nb", "x_cell", "x_sin", "A_sin", "A_dis", "A_sindis", "Vol_sin", "Vol_dis", "Vol_cell", "Vol_pp", "Vol_pv", "scale", "H01__nadp_tot", "H01__adp_tot", "H01__udp_tot", "H01__phos_tot", "H01__GALK_Vmax", "H01__GALK_dm", "H01__IMP_Vmax", "H01__ATPS_Vmax", "H01__ALDR_Vmax", "H01__NADPR_Vmax", "H01__GALT_Vmax", "H01__GALE_Vmax", "H01__UGP_Vmax", "H01__UGP_dm", "H01__PPASE_Vmax", "H01__NDKU_Vmax", "H01__PGM1_Vmax", "H01__GLY_Vmax", "H01__GTF_Vmax", "H01__GLUT2_Vmax", "H01__GLUT2_dm", "H01__GLUT2_GAL",  "" };
const char* xc_names[] = {"Phosphate", "D-galactose-1-phosphate", "UDP-D-glucose", "D-galactose", "ATP", "UDP", "D-glucose-1-phosphate", "NADP", "D-galactose M", "UTP", "D-glucose-6-phosphate", "gal", "D-galactitol", "galM", "H2O M",  "" };
const char* pc_names[] = { "" };
const char* yc_names[] = {"Pyrophosphate", "NADPH", "ADP", "UDP-D-galactose",  "" };
const char* dx_names[] = {"ODE Phosphate", "ODE D-galactose-1-phosphate", "ODE UDP-D-glucose", "ODE D-galactose", "ODE ATP", "ODE UDP", "ODE D-glucose-1-phosphate", "ODE NADP", "ODE D-galactose M", "ODE UTP", "ODE D-glucose-6-phosphate", "ODE gal", "ODE D-galactitol", "ODE galM", "ODE H2O M",  "" };
const char* ct_names[] = {"CT Pyrophosphate", "CT NADPH", "CT ADP", "CT UDP-D-galactose",  "" };
#endif // NAME_ARRAYS

#ifdef INITIAL
x[0] = 8.173049637854698e-13;	//metabolite 'Phosphate': reactions
x[1] = 1.634609927570939e-16;	//metabolite 'D-galactose-1-phosphate': reactions
x[2] = 5.557673753741195e-14;	//metabolite 'UDP-D-glucose': reactions
x[3] = 1.961531913085127e-17;	//metabolite 'D-galactose': reactions
x[4] = 4.413446804441537e-13;	//metabolite 'ATP': reactions
x[5] = 1.471148934813845e-14;	//metabolite 'UDP': reactions
x[6] = 1.961531913085128e-15;	//metabolite 'D-glucose-1-phosphate': reactions
x[7] = 1.63460992757094e-14;	//metabolite 'NADP': reactions
x[8] = 0;	//metabolite 'D-galactose M': reactions
x[9] = 4.413446804441539e-14;	//metabolite 'UTP': reactions
x[10] = 1.961531913085127e-14;	//metabolite 'D-glucose-6-phosphate': reactions
x[11] = 1.447645894774177e-18;	//metabolite 'gal': reactions
x[12] = 1.634609927570939e-16;	//metabolite 'D-galactitol': reactions
x[13] = 0;	//metabolite 'galM': reactions
x[14] = 0;	//metabolite 'H2O M': reactions
#endif INITIAL

#ifdef FIXED
ct[0] = 6.635699000974228e-13;	//ct[0] conserved total for 'Pyrophosphate'
ct[1] = 3.26921985514188e-14;	//ct[1] conserved total for 'NADPH'
ct[2] = 6.374978717526663e-13;	//ct[2] conserved total for 'ADP'
ct[3] = 1.324034041332461e-13;	//ct[3] conserved total for 'UDP-D-galactose'
p[0] = 0.0005;	//global quantity 'L':fixed
p[1] = 4.4e-06;	//global quantity 'y_sin':fixed
p[2] = 8e-07;	//global quantity 'y_dis':fixed
p[3] = 6.25e-06;	//global quantity 'y_cell':fixed
p[4] = 6e-05;	//global quantity 'flow_sin':fixed
p[5] = 1;	//global quantity 'Nc':fixed
p[6] = 1;	//global quantity 'Nf':fixed
p[7] = 1e-14;	//global quantity 'scale_f':fixed
p[8] = 1;	//global quantity 'REF_P':fixed
p[9] = 0;	//global quantity 'deficiency':fixed
p[10] = 0.1;	//global quantity 'GALK_PA':fixed
p[11] = 50;	//global quantity 'GALK_keq':fixed
p[12] = 1.5;	//global quantity 'GALK_k_gal1p':fixed
p[13] = 0.8;	//global quantity 'GALK_k_adp':fixed
p[14] = 5.3;	//global quantity 'GALK_ki_gal1p':fixed
p[15] = 8.7;	//global quantity 'GALK_kcat':fixed
p[16] = 0.97;	//global quantity 'GALK_k_gal':fixed
p[17] = 0.034;	//global quantity 'GALK_k_atp':fixed
p[18] = 1;	//global quantity 'H01__GALK_P':fixed
p[19] = 0.05;	//global quantity 'IMP_f':fixed
p[20] = 0.35;	//global quantity 'IMP_k_gal1p':fixed
p[21] = 1;	//global quantity 'H01__IMP_P':fixed
p[22] = 100;	//global quantity 'ATPS_f':fixed
p[23] = 0.58;	//global quantity 'ATPS_keq':fixed
p[24] = 0.1;	//global quantity 'ATPS_k_adp':fixed
p[25] = 0.5;	//global quantity 'ATPS_k_atp':fixed
p[26] = 0.1;	//global quantity 'ATPS_k_phos':fixed
p[27] = 1;	//global quantity 'H01__ATPS_P':fixed
p[28] = 1e+06;	//global quantity 'ALDR_f':fixed
p[29] = 4;	//global quantity 'ALDR_keq':fixed
p[30] = 40;	//global quantity 'ALDR_k_gal':fixed
p[31] = 40;	//global quantity 'ALDR_k_galtol':fixed
p[32] = 0.1;	//global quantity 'ALDR_k_nadp':fixed
p[33] = 0.1;	//global quantity 'ALDR_k_nadph':fixed
p[34] = 1;	//global quantity 'H01__ALDR_P':fixed
p[35] = 1e-10;	//global quantity 'NADPR_f':fixed
p[36] = 1;	//global quantity 'NADPR_keq':fixed
p[37] = 0.015;	//global quantity 'NADPR_k_nadp':fixed
p[38] = 0.01;	//global quantity 'NADPR_ki_nadph':fixed
p[39] = 1;	//global quantity 'H01__NADPR_P':fixed
p[40] = 0.01;	//global quantity 'GALT_f':fixed
p[41] = 1;	//global quantity 'GALT_keq':fixed
p[42] = 0.37;	//global quantity 'GALT_k_glc1p':fixed
p[43] = 0.5;	//global quantity 'GALT_k_udpgal':fixed
p[44] = 0.13;	//global quantity 'GALT_ki_utp':fixed
p[45] = 0.35;	//global quantity 'GALT_ki_udp':fixed
p[46] = 804;	//global quantity 'GALT_vm':fixed
p[47] = 1.25;	//global quantity 'GALT_k_gal1p':fixed
p[48] = 0.43;	//global quantity 'GALT_k_udpglc':fixed
p[49] = 1;	//global quantity 'H01__GALT_P':fixed
p[50] = 0.3;	//global quantity 'GALE_f':fixed
p[51] = 0.0278;	//global quantity 'GALE_PA':fixed
p[52] = 36;	//global quantity 'GALE_kcat':fixed
p[53] = 0.33;	//global quantity 'GALE_keq':fixed
p[54] = 0.069;	//global quantity 'GALE_k_udpglc':fixed
p[55] = 0.3;	//global quantity 'GALE_k_udpgal':fixed
p[56] = 1;	//global quantity 'H01__GALE_P':fixed
p[57] = 2000;	//global quantity 'UGP_f':fixed
p[58] = 0.01;	//global quantity 'UGALP_f':fixed
p[59] = 0.45;	//global quantity 'UGP_keq':fixed
p[60] = 0.563;	//global quantity 'UGP_k_utp':fixed
p[61] = 0.172;	//global quantity 'UGP_k_glc1p':fixed
p[62] = 0.049;	//global quantity 'UGP_k_udpglc':fixed
p[63] = 0.166;	//global quantity 'UGP_k_ppi':fixed
p[64] = 5;	//global quantity 'UGP_k_gal1p':fixed
p[65] = 0.42;	//global quantity 'UGP_k_udpgal':fixed
p[66] = 0.643;	//global quantity 'UGP_ki_utp':fixed
p[67] = 0.643;	//global quantity 'UGP_ki_udpglc':fixed
p[68] = 1;	//global quantity 'H01__UGP_P':fixed
p[69] = 0.05;	//global quantity 'PPASE_f':fixed
p[70] = 0.07;	//global quantity 'PPASE_k_ppi':fixed
p[71] = 4;	//global quantity 'PPASE_n':fixed
p[72] = 1;	//global quantity 'H01__PPASE_P':fixed
p[73] = 2;	//global quantity 'NDKU_f':fixed
p[74] = 1;	//global quantity 'NDKU_keq':fixed
p[75] = 1.33;	//global quantity 'NDKU_k_atp':fixed
p[76] = 0.042;	//global quantity 'NDKU_k_adp':fixed
p[77] = 27;	//global quantity 'NDKU_k_utp':fixed
p[78] = 0.19;	//global quantity 'NDKU_k_udp':fixed
p[79] = 1;	//global quantity 'H01__NDKU_P':fixed
p[80] = 50;	//global quantity 'PGM1_f':fixed
p[81] = 10;	//global quantity 'PGM1_keq':fixed
p[82] = 0.67;	//global quantity 'PGM1_k_glc6p':fixed
p[83] = 0.045;	//global quantity 'PGM1_k_glc1p':fixed
p[84] = 1;	//global quantity 'H01__PGM1_P':fixed
p[85] = 0.1;	//global quantity 'GLY_f':fixed
p[86] = 0.12;	//global quantity 'GLY_k_glc6p':fixed
p[87] = 0.2;	//global quantity 'GLY_k_p':fixed
p[88] = 1;	//global quantity 'H01__GLY_P':fixed
p[89] = 0.02;	//global quantity 'GTF_f':fixed
p[90] = 0.1;	//global quantity 'GTF_k_udpgal':fixed
p[91] = 0.1;	//global quantity 'GTF_k_udpglc':fixed
p[92] = 1;	//global quantity 'H01__GTF_P':fixed
p[93] = 1e+06;	//global quantity 'GLUT2_f':fixed
p[94] = 85.5;	//global quantity 'GLUT2_k_gal':fixed
p[95] = 1;	//global quantity 'H01__GLUT2_P':fixed
#endif FIXED

#ifdef ASSIGNMENT
y[0] = ct[0]-0.5*x[0]-0.5*x[1]-0.5*x[4]-0.5*x[6]-0.5*x[9]-0.5*x[10];	//metabolite 'Pyrophosphate': reactions
y[1] = ct[1]-x[7];	//metabolite 'NADPH': reactions
y[2] = ct[2]-1*x[4];	//metabolite 'ADP': reactions
y[3] = ct[3]-x[2]-x[5]-x[9];	//metabolite 'UDP-D-galactose': reactions
y[6] = p[6]*p[5];	//model entity 'Nb':assignment
y[7] = p[0]/p[5];	//model entity 'x_cell':assignment
y[8] = y[7]/p[6];	//model entity 'x_sin':assignment
y[9] = PI*pow(p[1],2.00000000000000000);	//model entity 'A_sin':assignment
y[10] = PI*pow((p[1]+p[2]),2.00000000000000000)-y[9];	//model entity 'A_dis':assignment
y[11] = 2.00000000000000000*PI*p[1]*y[8];	//model entity 'A_sindis':assignment
y[12] = y[9]*y[8];	//model entity 'Vol_sin':assignment
y[13] = y[10]*y[8];	//model entity 'Vol_dis':assignment
y[14] = PI*pow((p[1]+p[2]+p[3]),2.00000000000000000)*y[7]-PI*pow((p[1]+p[2]),2.00000000000000000)*y[7];	//model entity 'Vol_cell':assignment
y[15] = y[12];	//model entity 'Vol_pp':assignment
y[16] = y[12];	//model entity 'Vol_pv':assignment
y[17] = p[7];	//model entity 'scale':assignment
y[18] = x_c[7]+y_c[1];	//model entity 'H01__nadp_tot':assignment
y[19] = x_c[4]+y_c[2];	//model entity 'H01__adp_tot':assignment
y[20] = x_c[9]+x_c[5]+x_c[2]+y_c[3];	//model entity 'H01__udp_tot':assignment
y[21] = 3.00000000000000000*x_c[4]+2.00000000000000000*y_c[2]+3.00000000000000000*x_c[9]+2.00000000000000000*x_c[5]+x_c[0]+2.00000000000000000*y_c[0]+x_c[6]+x_c[10]+x_c[1]+2.00000000000000000*x_c[2]+2.00000000000000000*y_c[3];	//model entity 'H01__phos_tot':assignment
y[22] = y[17]*p[10]*p[15]*p[18]/p[8];	//model entity 'H01__GALK_Vmax':assignment
y[23] = (1.00000000000000000+(x_c[3]+x_c[8])/p[16])*(1.00000000000000000+x_c[4]/p[17])+(1.00000000000000000+x_c[1]/p[12])*(1.00000000000000000+y_c[2]/p[13])-1.00000000000000000;	//model entity 'H01__GALK_dm':assignment
y[24] = p[19]*y[22]*p[21]/p[8];	//model entity 'H01__IMP_Vmax':assignment
y[25] = p[22]*y[22]*p[27]/p[8];	//model entity 'H01__ATPS_Vmax':assignment
y[26] = p[28]*y[22]*p[34]/p[8];	//model entity 'H01__ALDR_Vmax':assignment
y[27] = p[35]*y[26]*p[39]/p[8];	//model entity 'H01__NADPR_Vmax':assignment
y[28] = p[49]/p[8]*p[40]*y[22]*p[46];	//model entity 'H01__GALT_Vmax':assignment
y[29] = p[50]*y[22]*p[51]*p[52]*p[56]/p[8];	//model entity 'H01__GALE_Vmax':assignment
y[30] = p[57]*y[22]*p[68]/p[8];	//model entity 'H01__UGP_Vmax':assignment
y[31] = (1.00000000000000000+x_c[9]/p[60]+x_c[2]/p[67])*(1.00000000000000000+x_c[6]/p[61]+x_c[1]/p[64])+(1.00000000000000000+x_c[2]/p[62]+y_c[3]/p[65]+x_c[9]/p[66])*(1.00000000000000000+y_c[0]/p[63])-1.00000000000000000;	//model entity 'H01__UGP_dm':assignment
y[32] = p[69]*y[30]*p[72]/p[8];	//model entity 'H01__PPASE_Vmax':assignment
y[33] = p[73]*y[30]*p[79]/p[8];	//model entity 'H01__NDKU_Vmax':assignment
y[34] = p[80]*y[22]*p[84]/p[8];	//model entity 'H01__PGM1_Vmax':assignment
y[35] = p[85]*y[34]*p[88]/p[8];	//model entity 'H01__GLY_Vmax':assignment
y[36] = p[89]*y[22]*p[92]/p[8];	//model entity 'H01__GTF_Vmax':assignment
y[37] = p[93]*y[17]*p[95]/p[8];	//model entity 'H01__GLUT2_Vmax':assignment
y[38] = 1.00000000000000000+(x_c[11]+x_c[13])/p[94]+(x_c[3]+x_c[8])/p[94];	//model entity 'H01__GLUT2_dm':assignment
y[39] = ;	//model entity 'H01__GLUT2_GAL':assignment
// WARNING : expression for "ModelValue" "H01__GLUT2_GAL" contains reference to a value in object "galactose transport" of type "Reaction" which is not supported in this ODE exporter Version.
y[4] = y[13];	//model entity '[D001] Disse Space 1':assignment
y[5] = y[14];	//model entity '[H01] Hepatocyte 1':assignment
x_c[0] = x[0]/y[5];	//concentration of metabolite 'Phosphate': reactions
x_c[1] = x[1]/y[5];	//concentration of metabolite 'D-galactose-1-phosphate': reactions
x_c[2] = x[2]/y[5];	//concentration of metabolite 'UDP-D-glucose': reactions
x_c[3] = x[3]/y[5];	//concentration of metabolite 'D-galactose': reactions
x_c[4] = x[4]/y[5];	//concentration of metabolite 'ATP': reactions
x_c[5] = x[5]/y[5];	//concentration of metabolite 'UDP': reactions
x_c[6] = x[6]/y[5];	//concentration of metabolite 'D-glucose-1-phosphate': reactions
x_c[7] = x[7]/y[5];	//concentration of metabolite 'NADP': reactions
x_c[8] = x[8]/y[5];	//concentration of metabolite 'D-galactose M': reactions
x_c[9] = x[9]/y[5];	//concentration of metabolite 'UTP': reactions
x_c[10] = x[10]/y[5];	//concentration of metabolite 'D-glucose-6-phosphate': reactions
x_c[11] = x[11]/y[4];	//concentration of metabolite 'gal': reactions
x_c[12] = x[12]/y[5];	//concentration of metabolite 'D-galactitol': reactions
x_c[13] = x[13]/y[4];	//concentration of metabolite 'galM': reactions
y_c[0] = y[0]/y[5];	//concentration of metabolite 'Pyrophosphate': reactions
y_c[1] = y[1]/y[5];	//concentration of metabolite 'NADPH': reactions
y_c[2] = y[2]/y[5];	//concentration of metabolite 'ADP': reactions
y_c[3] = y[3]/y[5];	//concentration of metabolite 'UDP-D-galactose': reactions
x_c[14] = x[14]/y[5];	//concentration of metabolite 'H2O M': reactions
#endif ASSIGNMENT

#ifdef FUNCTIONS_HEADERS
double FunctionForGalactokinase_H01_(double param_0, double param_1, double param_2, double param_3, double volume_0, double param_4, double param_5, double prod_0, double sub_0, double sub_1, double prod_1); 
double FunctionForGalactokinase_H01__2(double param_0, double param_1, double param_2, double volume_0, double param_3, double param_4, double sub_0, double prod_0, double sub_1); 
double FunctionForInositolMonophosphatase_H01_(double volume_0, double param_0, double sub_0, double param_1); 
double FunctionForATPSynthase_H01_(double param_0, double param_1, double param_2, double param_3, double volume_0, double param_4, double sub_0, double prod_0, double sub_1); 
double FunctionForAldoseReductase_H01_(double param_0, double param_1, double param_2, double param_3, double param_4, double volume_0, double param_5, double sub_0, double prod_0, double prod_1, double sub_1); 
double FunctionForNADPReductase_H01_(double volume_0, double param_0, double sub_0, double prod_0, double param_1, double param_2, double param_3); 
double FunctionForGalactose_1_phosphateUridylTransferase_H01_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double volume_0, double param_7, double sub_0, double prod_0, double modif_0, double prod_1, double sub_1, double modif_1); 
double FunctionForUDP_glucose4_epimerase_H01_(double param_0, double param_1, double param_2, double volume_0, double param_3, double prod_0, double sub_0); 
double FunctionForUDP_glucosePyrophosphorylase_H01_(double volume_0, double param_0, double param_1, double sub_0, double prod_0, double prod_1, double sub_1, double param_2, double param_3, double param_4); 
double FunctionForUDP_galactosePyrophosphorylase_H01_(double volume_0, double param_0, double param_1, double sub_0, double prod_0, double prod_1, double sub_1, double param_2, double param_3, double param_4, double param_5); 
double FunctionForPyrophosphatase_H01_(double volume_0, double param_0, double sub_0, double param_1, double param_2); 
double FunctionForATPUDPPhosphotransferase_H01_(double volume_0, double param_0, double prod_0, double sub_0, double sub_1, double prod_1, double param_1, double param_2, double param_3, double param_4, double param_5); 
double FunctionForPhosphoglucomutase_1_H01_(double volume_0, double param_0, double sub_0, double prod_0, double param_1, double param_2, double param_3); 
double FunctionForGlycolysis_H01_(double param_0, double param_1, double volume_0, double param_2, double sub_0, double prod_0); 
double FunctionForGlycosyltransferaseGalactose_H01_(double param_0, double volume_0, double param_1, double sub_0); 
double FunctionForGlycosyltransferaseGlucose_H01_(double param_0, double volume_0, double param_1, double sub_0); 
double FunctionForGalactoseTransport(double sub_0, double param_0, double param_1, double param_2, double prod_0, double param_3); 
double FunctionForGalactoseTransport_2(double sub_0, double param_0, double param_1, double param_2, double prod_0, double param_3); 
#endif FUNCTIONS_HEADERS

#ifdef FUNCTIONS
double FunctionForGalactokinase_H01_(double param_0, double param_1, double param_2, double param_3, double volume_0, double param_4, double param_5, double prod_0, double sub_0, double sub_1, double prod_1) 	//Function for Galactokinase (H01)
{return  param_4/(param_1*param_0)*1.00000000000000000/(1.00000000000000000+prod_1/param_3)*(sub_1*sub_0-prod_1*prod_0/param_2)/param_5/volume_0;} 
double FunctionForGalactokinase_H01__2(double param_0, double param_1, double param_2, double volume_0, double param_3, double param_4, double sub_0, double prod_0, double sub_1) 	//Function for Galactokinase (H01)_2
{return  param_3/(param_1*param_0)*1.00000000000000000/(1.00000000000000000+prod_0/param_2)*sub_1*sub_0/param_4/volume_0;} 
double FunctionForInositolMonophosphatase_H01_(double volume_0, double param_0, double sub_0, double param_1) 	//Function for Inositol monophosphatase (H01)
{return  param_0/param_1*sub_0/(1.00000000000000000+sub_0/param_1)/volume_0;} 
double FunctionForATPSynthase_H01_(double param_0, double param_1, double param_2, double param_3, double volume_0, double param_4, double sub_0, double prod_0, double sub_1) 	//Function for ATP synthase (H01)
{return  param_4/(param_0*param_2)*(sub_0*sub_1-prod_0/param_3)/((1.00000000000000000+sub_0/param_0)*(1.00000000000000000+sub_1/param_2)+prod_0/param_1)/volume_0;} 
double FunctionForAldoseReductase_H01_(double param_0, double param_1, double param_2, double param_3, double param_4, double volume_0, double param_5, double sub_0, double prod_0, double prod_1, double sub_1) 	//Function for Aldose reductase (H01)
{return  param_5/(param_0*param_2)*(sub_0*sub_1-prod_0*prod_1/param_4)/((1.00000000000000000+sub_0/param_0)*(1.00000000000000000+sub_1/param_3)+(1.00000000000000000+prod_0/param_1)*(1.00000000000000000+prod_1/param_2)-1.00000000000000000)/volume_0;} 
double FunctionForNADPReductase_H01_(double volume_0, double param_0, double sub_0, double prod_0, double param_1, double param_2, double param_3) 	//Function for NADP Reductase (H01)
{return  param_0/param_1*(sub_0-prod_0/param_2)/(1.00000000000000000+sub_0/param_1+prod_0/param_3)/volume_0;} 
double FunctionForGalactose_1_phosphateUridylTransferase_H01_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double volume_0, double param_7, double sub_0, double prod_0, double modif_0, double prod_1, double sub_1, double modif_1) 	//Function for Galactose-1-phosphate uridyl transferase (H01)
{return  param_7/(param_0*param_3)*(sub_0*sub_1-prod_0*prod_1/param_4)/((1.00000000000000000+sub_0/param_0)*(1.00000000000000000+sub_1/param_3+modif_0/param_5+modif_1/param_6)+(1.00000000000000000+prod_0/param_1)*(1.00000000000000000+prod_1/param_2)-1.00000000000000000)/volume_0;} 
double FunctionForUDP_glucose4_epimerase_H01_(double param_0, double param_1, double param_2, double volume_0, double param_3, double prod_0, double sub_0) 	//Function for UDP-glucose 4-epimerase (H01)
{return  param_3/param_1*(sub_0-prod_0/param_2)/(1.00000000000000000+sub_0/param_1+prod_0/param_0)/volume_0;} 
double FunctionForUDP_glucosePyrophosphorylase_H01_(double volume_0, double param_0, double param_1, double sub_0, double prod_0, double prod_1, double sub_1, double param_2, double param_3, double param_4) 	//Function for UDP-glucose pyrophosphorylase (H01)
{return  param_0/(param_3*param_2)*(sub_0*sub_1-prod_1*prod_0/param_4)/param_1/volume_0;} 
double FunctionForUDP_galactosePyrophosphorylase_H01_(double volume_0, double param_0, double param_1, double sub_0, double prod_0, double prod_1, double sub_1, double param_2, double param_3, double param_4, double param_5) 	//Function for UDP-galactose pyrophosphorylase (H01)
{return  param_2*param_0/(param_4*param_3)*(sub_0*sub_1-prod_1*prod_0/param_5)/param_1/volume_0;} 
double FunctionForPyrophosphatase_H01_(double volume_0, double param_0, double sub_0, double param_1, double param_2) 	//Function for Pyrophosphatase (H01)
{return  param_0*pow(sub_0,param_2)/(pow(sub_0,param_2)+pow(param_1,param_2))/volume_0;} 
double FunctionForATPUDPPhosphotransferase_H01_(double volume_0, double param_0, double prod_0, double sub_0, double sub_1, double prod_1, double param_1, double param_2, double param_3, double param_4, double param_5) 	//Function for ATP:UDP phosphotransferase (H01)
{return  param_0/param_2/param_3*(sub_0*sub_1-prod_0*prod_1/param_5)/((1.00000000000000000+sub_0/param_2)*(1.00000000000000000+sub_1/param_3)+(1.00000000000000000+prod_0/param_1)*(1.00000000000000000+prod_1/param_4)-1.00000000000000000)/volume_0;} 
double FunctionForPhosphoglucomutase_1_H01_(double volume_0, double param_0, double sub_0, double prod_0, double param_1, double param_2, double param_3) 	//Function for Phosphoglucomutase-1 (H01)
{return  param_0/param_1*(sub_0-prod_0/param_3)/(1.00000000000000000+sub_0/param_1+prod_0/param_2)/volume_0;} 
double FunctionForGlycolysis_H01_(double param_0, double param_1, double volume_0, double param_2, double sub_0, double prod_0) 	//Function for Glycolysis (H01)
{return  param_2*(sub_0-param_0)/param_0*prod_0/(prod_0+param_1)/volume_0;} 
double FunctionForGlycosyltransferaseGalactose_H01_(double param_0, double volume_0, double param_1, double sub_0) 	//Function for Glycosyltransferase galactose (H01)
{return  param_1*sub_0/(sub_0+param_0)/volume_0;} 
double FunctionForGlycosyltransferaseGlucose_H01_(double param_0, double volume_0, double param_1, double sub_0) 	//Function for Glycosyltransferase glucose (H01)
{return  0.00000000000000000*param_1*sub_0/(sub_0+param_0)/volume_0;} 
double FunctionForGalactoseTransport(double sub_0, double param_0, double param_1, double param_2, double prod_0, double param_3) 	//Function for galactose transport
{return  param_1/(param_0*param_3)*(sub_0-prod_0)/param_2;} 
double FunctionForGalactoseTransport_2(double sub_0, double param_0, double param_1, double param_2, double prod_0, double param_3) 	//Function for galactose transport_2
{return  param_1/(param_0*param_3)*(sub_0-prod_0)/param_2;} 
#endif FUNCTIONS

#ifdef ODEs
dx[0] = FunctionForInositolMonophosphatase_H01_(y[5], y[24], x_c[1], p[20])*y[5]-FunctionForATPSynthase_H01_(p[24], p[25], p[26], p[23], y[5], y[25], y_c[2], x_c[4], x_c[0])*y[5]+2*FunctionForPyrophosphatase_H01_(y[5], y[32], y_c[0], p[70], p[71])*y[5]+FunctionForGlycolysis_H01_(p[86], p[87], y[5], y[35], x_c[10], x_c[0])*y[5];	// 
dx[1] = FunctionForGalactokinase_H01_(p[17], p[16], p[11], p[14], y[5], y[22], y[23], y_c[2], x_c[4], x_c[3], x_c[1])*y[5]+FunctionForGalactokinase_H01__2(p[17], p[16], p[14], y[5], y[22], y[23], x_c[4], x_c[1], x_c[8])*y[5]-FunctionForInositolMonophosphatase_H01_(y[5], y[24], x_c[1], p[20])*y[5]-FunctionForGalactose_1_phosphateUridylTransferase_H01_(p[47], p[42], p[43], p[48], p[41], p[45], p[44], y[5], y[28], x_c[1], x_c[6], x_c[5], y_c[3], x_c[2], x_c[9])*y[5]-FunctionForUDP_galactosePyrophosphorylase_H01_(y[5], y[30], y[31], x_c[1], y_c[0], y_c[3], x_c[9], p[58], p[64], p[60], p[59])*y[5];	// 
dx[2] = -FunctionForGalactose_1_phosphateUridylTransferase_H01_(p[47], p[42], p[43], p[48], p[41], p[45], p[44], y[5], y[28], x_c[1], x_c[6], x_c[5], y_c[3], x_c[2], x_c[9])*y[5]-FunctionForUDP_glucose4_epimerase_H01_(p[55], p[54], p[53], y[5], y[29], y_c[3], x_c[2])*y[5]+FunctionForUDP_glucosePyrophosphorylase_H01_(y[5], y[30], y[31], x_c[6], y_c[0], x_c[2], x_c[9], p[61], p[60], p[59])*y[5]-FunctionForGlycosyltransferaseGlucose_H01_(p[91], y[5], y[36], x_c[2])*y[5];	// 
dx[3] = -FunctionForGalactokinase_H01_(p[17], p[16], p[11], p[14], y[5], y[22], y[23], y_c[2], x_c[4], x_c[3], x_c[1])*y[5]+FunctionForInositolMonophosphatase_H01_(y[5], y[24], x_c[1], p[20])*y[5]-FunctionForAldoseReductase_H01_(p[30], p[31], p[32], p[33], p[29], y[5], y[26], x_c[3], x_c[12], x_c[7], y_c[1])*y[5]+FunctionForGalactoseTransport(x_c[11], p[94], y[37], y[38], x_c[3], p[6]);	// 
dx[4] = -FunctionForGalactokinase_H01_(p[17], p[16], p[11], p[14], y[5], y[22], y[23], y_c[2], x_c[4], x_c[3], x_c[1])*y[5]-FunctionForGalactokinase_H01__2(p[17], p[16], p[14], y[5], y[22], y[23], x_c[4], x_c[1], x_c[8])*y[5]+FunctionForATPSynthase_H01_(p[24], p[25], p[26], p[23], y[5], y[25], y_c[2], x_c[4], x_c[0])*y[5]-FunctionForATPUDPPhosphotransferase_H01_(y[5], y[33], y_c[2], x_c[4], x_c[5], x_c[9], p[76], p[75], p[78], p[77], p[74])*y[5];	// 
dx[5] = -FunctionForATPUDPPhosphotransferase_H01_(y[5], y[33], y_c[2], x_c[4], x_c[5], x_c[9], p[76], p[75], p[78], p[77], p[74])*y[5]+FunctionForGlycosyltransferaseGalactose_H01_(p[90], y[5], y[36], y_c[3])*y[5]+FunctionForGlycosyltransferaseGlucose_H01_(p[91], y[5], y[36], x_c[2])*y[5];	// 
dx[6] = FunctionForGalactose_1_phosphateUridylTransferase_H01_(p[47], p[42], p[43], p[48], p[41], p[45], p[44], y[5], y[28], x_c[1], x_c[6], x_c[5], y_c[3], x_c[2], x_c[9])*y[5]-FunctionForUDP_glucosePyrophosphorylase_H01_(y[5], y[30], y[31], x_c[6], y_c[0], x_c[2], x_c[9], p[61], p[60], p[59])*y[5]-FunctionForPhosphoglucomutase_1_H01_(y[5], y[34], x_c[6], x_c[10], p[83], p[82], p[81])*y[5];	// 
dx[7] = FunctionForAldoseReductase_H01_(p[30], p[31], p[32], p[33], p[29], y[5], y[26], x_c[3], x_c[12], x_c[7], y_c[1])*y[5]-FunctionForNADPReductase_H01_(y[5], y[27], x_c[7], y_c[1], p[37], p[36], p[38])*y[5];	// 
dx[8] = -FunctionForGalactokinase_H01__2(p[17], p[16], p[14], y[5], y[22], y[23], x_c[4], x_c[1], x_c[8])*y[5]+FunctionForGalactoseTransport_2(x_c[13], p[94], y[37], y[38], x_c[8], p[6]);	// 
dx[9] = -FunctionForUDP_glucosePyrophosphorylase_H01_(y[5], y[30], y[31], x_c[6], y_c[0], x_c[2], x_c[9], p[61], p[60], p[59])*y[5]-FunctionForUDP_galactosePyrophosphorylase_H01_(y[5], y[30], y[31], x_c[1], y_c[0], y_c[3], x_c[9], p[58], p[64], p[60], p[59])*y[5]+FunctionForATPUDPPhosphotransferase_H01_(y[5], y[33], y_c[2], x_c[4], x_c[5], x_c[9], p[76], p[75], p[78], p[77], p[74])*y[5];	// 
dx[10] = FunctionForPhosphoglucomutase_1_H01_(y[5], y[34], x_c[6], x_c[10], p[83], p[82], p[81])*y[5]-FunctionForGlycolysis_H01_(p[86], p[87], y[5], y[35], x_c[10], x_c[0])*y[5];	// 
dx[11] = -FunctionForGalactoseTransport(x_c[11], p[94], y[37], y[38], x_c[3], p[6]);	// 
dx[12] = FunctionForAldoseReductase_H01_(p[30], p[31], p[32], p[33], p[29], y[5], y[26], x_c[3], x_c[12], x_c[7], y_c[1])*y[5];	// 
dx[13] = -FunctionForGalactoseTransport_2(x_c[13], p[94], y[37], y[38], x_c[8], p[6]);	// 
dx[14] = 0;	// 
#endif ODEs
