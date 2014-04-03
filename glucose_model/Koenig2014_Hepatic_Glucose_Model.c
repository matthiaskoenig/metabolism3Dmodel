#ifdef SIZE_DEFINITIONS
#define N_METABS 49
#define N_ODE_METABS 0
#define N_INDEP_METABS 23
#define N_COMPARTMENTS 3
#define N_GLOBAL_PARAMS 256
#define N_KIN_PARAMS 0
#define N_REACTIONS 36

#define N_ARRAY_SIZE_P  239	// number of parameters
#define N_ARRAY_SIZE_X  23	// number of initials
#define N_ARRAY_SIZE_Y  46	// number of assigned elements
#define N_ARRAY_SIZE_XC 23	// number of x concentration
#define N_ARRAY_SIZE_PC 23	// number of p concentration
#define N_ARRAY_SIZE_YC 3	// number of y concentration
#define N_ARRAY_SIZE_DX 23	// number of ODEs 
#define N_ARRAY_SIZE_CT 3	// number of conserved totals

#endif // SIZE_DEFINITIONS

#ifdef TIME
#define T  <set here a user name for the time variable> 
#endif // TIME

#ifdef NAME_ARRAYS
const char* p_names[] = {"glc_ext", "lac_ext", "atp", "adp", "amp", "nad", "nadh", "phos", "co2", "h2o", "h", "glyglc", "co2_mito", "phos_mito", "acoa_mito", "cit_mito", "atp_mito", "adp_mito", "coa_mito", "nadh_mito", "nad_mito", "h2o_mito", "h_mito", "extern", "cyto", "mito", "Vcyto", "Vliver", "fliver", "bodyweight", "sec_per_min", "conversion_factor", "x_ins1", "x_ins2", "x_ins3", "x_ins4", "x_glu1", "x_glu2", "x_glu3", "x_glu4", "x_epi1", "x_epi2", "x_epi3", "x_epi4", "K_val", "epi_f", "K_ins", "K_glu", "K_epi", "scale", "scale_gly", "scale_glyglc", "GLUT2_keq", "GLUT2_km", "GLUT2_Vmax", "GK_n_gkrp", "GK_km_glc1", "GK_km_fru6p", "GK_b", "GK_n", "GK_km_glc", "GK_km_atp", "GK_Vmax", "G6PASE_km_glc6p", "G6PASE_Vmax", "GPI_keq", "GPI_km_glc6p", "GPI_km_fru6p", "GPI_Vmax", "G16PI_keq", "G16PI_km_glc6p", "G16PI_km_glc1p", "G16PI_Vmax", "UPGASE_keq", "UPGASE_km_utp", "UPGASE_km_glc1p", "UPGASE_km_udpglc", "UPGASE_km_pp", "UPGASE_Vmax", "PPASE_km_pp", "PPASE_Vmax", "GS_C", "GS_k1_max", "GS_k1_nat", "GS_k2_nat", "GS_k1_phospho", "GS_k2_phospho", "GS_Vmax", "GP_keq", "GP_k_glyc_native", "GP_k_glyc_phospho", "GP_k_glc1p_native", "GP_k_glc1p_phospho", "GP_k_p_native", "GP_k_p_phospho", "GP_ki_glc_phospho", "GP_ka_amp_native", "GP_base_amp_native", "GP_max_amp_native", "GP_Vmax", "GP_C", "GP_k1_max", "NDKGTP_keq", "NDKGTP_km_atp", "NDKGTP_km_adp", "NDKGTP_km_gtp", "NDKGTP_km_gdp", "NDKGTP_Vmax", "NDKUTP_keq", "NDKUTP_km_atp", "NDKUTP_km_adp", "NDKUTP_km_utp", "NDKUTP_km_udp", "NDKUTP_Vmax", "AK_keq", "AK_km_atp", "AK_km_amp", "AK_km_adp", "AK_Vmax", "PFK2_n_native", "PFK2_n_phospho", "PFK2_k_fru6p_native", "PFK2_k_fru6p_phospho", "PFK2_k_atp_native", "PFK2_k_atp_phospho", "PFK2_Vmax", "FBP2_km_fru26bp_native", "FBP2_ki_fru6p_native", "FBP2_km_fru26bp_phospho", "FBP2_ki_fru6p_phospho", "FBP2_Vmax", "PFK1_km_atp", "PFK1_km_fru6p", "PFK1_ki_fru6p", "PFK1_ka_fru26bp", "PFK1_Vmax", "FBP1_ki_fru26bp", "FBP1_km_fru16bp", "FBP1_Vmax", "ALD_keq", "ALD_km_fru16bp", "ALD_km_dhap", "ALD_km_grap", "ALD_ki1_grap", "ALD_ki2_grap", "ALD_Vmax", "TPI_keq", "TPI_km_dhap", "TPI_km_grap", "TPI_Vmax", "GAPDH_keq", "GAPDH_k_nad", "GAPDH_k_grap", "GAPDH_k_p", "GAPDH_k_nadh", "GAPDH_k_bpg13", "GAPDH_Vmax", "PGK_keq", "PGK_k_adp", "PGK_k_atp", "PGK_k_bpg13", "PGK_k_pg3", "PGK_Vmax", "PGM_keq", "PGM_k_pg3", "PGM_k_pg2", "PGM_Vmax", "EN_keq", "EN_k_pep", "EN_k_pg2", "EN_Vmax", "PK_n", "PK_n_p", "PK_n_fbp", "PK_n_fbp_p", "PK_alpha", "PK_alpha_p", "PK_alpha_end", "PK_k_fbp", "PK_k_fbp_p", "PK_k_pep", "PK_k_pep_p", "PK_k_pep_end", "PK_k_adp", "PK_base_act", "PK_base_act_p", "PK_Vmax", "PEPCK_keq", "PEPCK_k_pep", "PEPCK_k_gdp", "PEPCK_k_co2", "PEPCK_k_oaa", "PEPCK_k_gtp", "PEPCK_Vmax", "PEPCKM_Vmax", "PC_k_atp", "PC_k_pyr", "PC_k_co2", "PC_k_acoa", "PC_n", "PC_Vmax", "LDH_keq", "LDH_k_pyr", "LDH_k_lac", "LDH_k_nad", "LDH_k_nadh", "LDH_Vmax", "LACT_keq", "LACT_k_lac", "LACT_Vmax", "PYRTM_keq", "PYRTM_k_pyr", "PYRTM_Vmax", "PEPTM_keq", "PEPTM_k_pep", "PEPTM_Vmax", "PDH_k_pyr", "PDH_k_coa", "PDH_k_nad", "PDH_ki_acoa", "PDH_ki_nadh", "PDH_alpha_nat", "PDH_alpha_p", "PDH_Vmax", "CS_keq", "CS_k_oaa", "CS_k_acoa", "CS_k_cit", "CS_k_coa", "CS_Vmax", "NDKGTPM_keq", "NDKGTPM_k_atp", "NDKGTPM_k_adp", "NDKGTPM_k_gtp", "NDKGTPM_k_gdp", "NDKGTPM_Vmax", "OAAFLX_Vmax", "ACOAFLX_Vmax", "CITFLX_Vmax",  "" };
const char* x_names[] = {"fru6p", "pep", "oaa_mito", "glc6p", "grap", "pyr", "glc1p", "pyr_mito", "dhap", "pg3", "udp", "glc", "gdp", "gtp_mito", "pp", "lac", "fru16bp", "pg2", "pep_mito", "utp", "bpg13", "fru26bp", "oaa",  "" };
const char* y_names[] = {"gtp", "udpglc", "gdp_mito", "nadh_tot", "atp_tot", "utp_tot", "gtp_tot", "nadh_mito_tot", "atp_mito_tot", "gtp_mito_tot", "ins", "ins_norm", "glu", "glu_norm", "epi", "epi_norm", "gamma", "GK_gc_free", "GS_storage_factor", "GS_k_udpglc_native", "GS_k_udpglc_phospho", "GS_native", "GS_phospho", "GP_fmax", "GP_vmax_native", "GP_native", "GP_vmax_phospho", "GP_phospho", "PFK2_native", "PFK2_phospho", "FBP2_native", "FBP2_phospho", "PK_f", "PK_f_p", "PK_alpha_inp", "PK_alpha_p_inp", "PK_pep_inp", "PK_pep_p_inp", "PK_native", "PK_phospho", "PDH_base", "PDH_nat", "PDH_p", "HGP", "GNG", "GLY",  "" };
const char* xc_names[] = {"fru6p", "pep", "oaa_mito", "glc6p", "grap", "pyr", "glc1p", "pyr_mito", "dhap", "pg3", "udp", "glc", "gdp", "gtp_mito", "pp", "lac", "fru16bp", "pg2", "pep_mito", "utp", "bpg13", "fru26bp", "oaa",  "" };
const char* pc_names[] = {"glc_ext", "lac_ext", "atp", "adp", "amp", "nad", "nadh", "phos", "co2", "h2o", "h", "glyglc", "co2_mito", "phos_mito", "acoa_mito", "cit_mito", "atp_mito", "adp_mito", "coa_mito", "nadh_mito", "nad_mito", "h2o_mito", "h_mito",  "" };
const char* yc_names[] = {"gtp", "udpglc", "gdp_mito",  "" };
const char* dx_names[] = {"ODE fru6p", "ODE pep", "ODE oaa_mito", "ODE glc6p", "ODE grap", "ODE pyr", "ODE glc1p", "ODE pyr_mito", "ODE dhap", "ODE pg3", "ODE udp", "ODE glc", "ODE gdp", "ODE gtp_mito", "ODE pp", "ODE lac", "ODE fru16bp", "ODE pg2", "ODE pep_mito", "ODE utp", "ODE bpg13", "ODE fru26bp", "ODE oaa",  "" };
const char* ct_names[] = {"CT gtp", "CT udpglc", "CT gdp_mito",  "" };
#endif // NAME_ARRAYS

#ifdef INITIAL
x[0] = 0.05000000000000001;	//metabolite 'fru6p': reactions
x[1] = 0.15;	//metabolite 'pep': reactions
x[2] = 0.002;	//metabolite 'oaa_mito': reactions
x[3] = 0.12;	//metabolite 'glc6p': reactions
x[4] = 0.1;	//metabolite 'grap': reactions
x[5] = 0.1;	//metabolite 'pyr': reactions
x[6] = 0.012;	//metabolite 'glc1p': reactions
x[7] = 0.02;	//metabolite 'pyr_mito': reactions
x[8] = 0.03;	//metabolite 'dhap': reactions
x[9] = 0.27;	//metabolite 'pg3': reactions
x[10] = 0.09000000000000001;	//metabolite 'udp': reactions
x[11] = 5;	//metabolite 'glc': reactions
x[12] = 0.1;	//metabolite 'gdp': reactions
x[13] = 0.058;	//metabolite 'gtp_mito': reactions
x[14] = 0.008000000000000007;	//metabolite 'pp': reactions
x[15] = 0.5;	//metabolite 'lac': reactions
x[16] = 0.02;	//metabolite 'fru16bp': reactions
x[17] = 0.03;	//metabolite 'pg2': reactions
x[18] = 0.03;	//metabolite 'pep_mito': reactions
x[19] = 0.27;	//metabolite 'utp': reactions
x[20] = 0.3000000000000001;	//metabolite 'bpg13': reactions
x[21] = 0.004000000000000004;	//metabolite 'fru26bp': reactions
x[22] = 0.01;	//metabolite 'oaa': reactions
#endif INITIAL

#ifdef FIXED
ct[0] = 0.39;	//ct[0] conserved total for 'gtp'
ct[1] = 0.7399999999999998;	//ct[1] conserved total for 'udpglc'
ct[2] = 0.07799999999999999;	//ct[2] conserved total for 'gdp_mito'
p[0] = 30;	//metabolite 'glc_ext': fixed
p[1] = 12;	//metabolite 'lac_ext': fixed
p[2] = 2.8;	//metabolite 'atp': fixed
p[3] = 0.8;	//metabolite 'adp': fixed
p[4] = 0.16;	//metabolite 'amp': fixed
p[5] = 1.22;	//metabolite 'nad': fixed
p[6] = 0.00056;	//metabolite 'nadh': fixed
p[7] = 5;	//metabolite 'phos': fixed
p[8] = 5;	//metabolite 'co2': fixed
p[9] = 0;	//metabolite 'h2o': fixed
p[10] = 0;	//metabolite 'h': fixed
p[11] = 250;	//metabolite 'glyglc': fixed
p[12] = 1;	//metabolite 'co2_mito': fixed
p[13] = 1;	//metabolite 'phos_mito': fixed
p[14] = 0.008;	//metabolite 'acoa_mito': fixed
p[15] = 0.064;	//metabolite 'cit_mito': fixed
p[16] = 0.56;	//metabolite 'atp_mito': fixed
p[17] = 0.16;	//metabolite 'adp_mito': fixed
p[18] = 0.011;	//metabolite 'coa_mito': fixed
p[19] = 0.048;	//metabolite 'nadh_mito': fixed
p[20] = 0.196;	//metabolite 'nad_mito': fixed
p[21] = 0;	//metabolite 'h2o_mito': fixed
p[22] = 0;	//metabolite 'h_mito': fixed
p[23] = 10;	//compartment 'extern':fixed
p[24] = 1;	//compartment 'cyto':fixed
p[25] = 0.2;	//compartment 'mito':fixed
p[26] = 1;	//global quantity 'Vcyto':fixed
p[27] = 1.5;	//global quantity 'Vliver':fixed
p[28] = 0.583333;	//global quantity 'fliver':fixed
p[29] = 70;	//global quantity 'bodyweight':fixed
p[30] = 60;	//global quantity 'sec_per_min':fixed
p[31] = 750;	//global quantity 'conversion_factor':fixed
p[32] = 818.9;	//global quantity 'x_ins1':fixed
p[33] = 0;	//global quantity 'x_ins2':fixed
p[34] = 8.6;	//global quantity 'x_ins3':fixed
p[35] = 4.2;	//global quantity 'x_ins4':fixed
p[36] = 190;	//global quantity 'x_glu1':fixed
p[37] = 37.9;	//global quantity 'x_glu2':fixed
p[38] = 3.01;	//global quantity 'x_glu3':fixed
p[39] = 6.4;	//global quantity 'x_glu4':fixed
p[40] = 6090;	//global quantity 'x_epi1':fixed
p[41] = 100;	//global quantity 'x_epi2':fixed
p[42] = 3.1;	//global quantity 'x_epi3':fixed
p[43] = 8.4;	//global quantity 'x_epi4':fixed
p[44] = 0.1;	//global quantity 'K_val':fixed
p[45] = 0.8;	//global quantity 'epi_f':fixed
p[46] = 81.89;	//global quantity 'K_ins':fixed
p[47] = 15.21;	//global quantity 'K_glu':fixed
p[48] = 599;	//global quantity 'K_epi':fixed
p[49] = 0.0166667;	//global quantity 'scale':fixed
p[50] = 0.0166667;	//global quantity 'scale_gly':fixed
p[51] = 0.0166667;	//global quantity 'scale_glyglc':fixed
p[52] = 1;	//global quantity 'GLUT2_keq':fixed
p[53] = 42;	//global quantity 'GLUT2_km':fixed
p[54] = 420;	//global quantity 'GLUT2_Vmax':fixed
p[55] = 2;	//global quantity 'GK_n_gkrp':fixed
p[56] = 15;	//global quantity 'GK_km_glc1':fixed
p[57] = 0.01;	//global quantity 'GK_km_fru6p':fixed
p[58] = 0.7;	//global quantity 'GK_b':fixed
p[59] = 1.6;	//global quantity 'GK_n':fixed
p[60] = 7.5;	//global quantity 'GK_km_glc':fixed
p[61] = 0.26;	//global quantity 'GK_km_atp':fixed
p[62] = 25.2;	//global quantity 'GK_Vmax':fixed
p[63] = 2;	//global quantity 'G6PASE_km_glc6p':fixed
p[64] = 18.9;	//global quantity 'G6PASE_Vmax':fixed
p[65] = 0.517061;	//global quantity 'GPI_keq':fixed
p[66] = 0.182;	//global quantity 'GPI_km_glc6p':fixed
p[67] = 0.071;	//global quantity 'GPI_km_fru6p':fixed
p[68] = 420;	//global quantity 'GPI_Vmax':fixed
p[69] = 15.7176;	//global quantity 'G16PI_keq':fixed
p[70] = 0.67;	//global quantity 'G16PI_km_glc6p':fixed
p[71] = 0.045;	//global quantity 'G16PI_km_glc1p':fixed
p[72] = 100;	//global quantity 'G16PI_Vmax':fixed
p[73] = 0.312238;	//global quantity 'UPGASE_keq':fixed
p[74] = 0.563;	//global quantity 'UPGASE_km_utp':fixed
p[75] = 0.172;	//global quantity 'UPGASE_km_glc1p':fixed
p[76] = 0.049;	//global quantity 'UPGASE_km_udpglc':fixed
p[77] = 0.166;	//global quantity 'UPGASE_km_pp':fixed
p[78] = 80;	//global quantity 'UPGASE_Vmax':fixed
p[79] = 0.005;	//global quantity 'PPASE_km_pp':fixed
p[80] = 2.4;	//global quantity 'PPASE_Vmax':fixed
p[81] = 500;	//global quantity 'GS_C':fixed
p[82] = 0.2;	//global quantity 'GS_k1_max':fixed
p[83] = 0.224;	//global quantity 'GS_k1_nat':fixed
p[84] = 0.1504;	//global quantity 'GS_k2_nat':fixed
p[85] = 3.003;	//global quantity 'GS_k1_phospho':fixed
p[86] = 0.09029;	//global quantity 'GS_k2_phospho':fixed
p[87] = 13.2;	//global quantity 'GS_Vmax':fixed
p[88] = 0.211827;	//global quantity 'GP_keq':fixed
p[89] = 4.8;	//global quantity 'GP_k_glyc_native':fixed
p[90] = 2.7;	//global quantity 'GP_k_glyc_phospho':fixed
p[91] = 120;	//global quantity 'GP_k_glc1p_native':fixed
p[92] = 2;	//global quantity 'GP_k_glc1p_phospho':fixed
p[93] = 300;	//global quantity 'GP_k_p_native':fixed
p[94] = 5;	//global quantity 'GP_k_p_phospho':fixed
p[95] = 5;	//global quantity 'GP_ki_glc_phospho':fixed
p[96] = 1;	//global quantity 'GP_ka_amp_native':fixed
p[97] = 0.03;	//global quantity 'GP_base_amp_native':fixed
p[98] = 0.3;	//global quantity 'GP_max_amp_native':fixed
p[99] = 6.8;	//global quantity 'GP_Vmax':fixed
p[100] = 500;	//global quantity 'GP_C':fixed
p[101] = 0.2;	//global quantity 'GP_k1_max':fixed
p[102] = 1;	//global quantity 'NDKGTP_keq':fixed
p[103] = 1.33;	//global quantity 'NDKGTP_km_atp':fixed
p[104] = 0.042;	//global quantity 'NDKGTP_km_adp':fixed
p[105] = 0.15;	//global quantity 'NDKGTP_km_gtp':fixed
p[106] = 0.031;	//global quantity 'NDKGTP_km_gdp':fixed
p[107] = 0;	//global quantity 'NDKGTP_Vmax':fixed
p[108] = 1;	//global quantity 'NDKUTP_keq':fixed
p[109] = 1.33;	//global quantity 'NDKUTP_km_atp':fixed
p[110] = 0.042;	//global quantity 'NDKUTP_km_adp':fixed
p[111] = 16;	//global quantity 'NDKUTP_km_utp':fixed
p[112] = 0.19;	//global quantity 'NDKUTP_km_udp':fixed
p[113] = 2940;	//global quantity 'NDKUTP_Vmax':fixed
p[114] = 0.24739;	//global quantity 'AK_keq':fixed
p[115] = 0.09;	//global quantity 'AK_km_atp':fixed
p[116] = 0.08;	//global quantity 'AK_km_amp':fixed
p[117] = 0.11;	//global quantity 'AK_km_adp':fixed
p[118] = 0;	//global quantity 'AK_Vmax':fixed
p[119] = 1.3;	//global quantity 'PFK2_n_native':fixed
p[120] = 2.1;	//global quantity 'PFK2_n_phospho':fixed
p[121] = 0.016;	//global quantity 'PFK2_k_fru6p_native':fixed
p[122] = 0.05;	//global quantity 'PFK2_k_fru6p_phospho':fixed
p[123] = 0.28;	//global quantity 'PFK2_k_atp_native':fixed
p[124] = 0.65;	//global quantity 'PFK2_k_atp_phospho':fixed
p[125] = 0.0042;	//global quantity 'PFK2_Vmax':fixed
p[126] = 0.01;	//global quantity 'FBP2_km_fru26bp_native':fixed
p[127] = 0.0035;	//global quantity 'FBP2_ki_fru6p_native':fixed
p[128] = 0.0005;	//global quantity 'FBP2_km_fru26bp_phospho':fixed
p[129] = 0.01;	//global quantity 'FBP2_ki_fru6p_phospho':fixed
p[130] = 0.126;	//global quantity 'FBP2_Vmax':fixed
p[131] = 0.111;	//global quantity 'PFK1_km_atp':fixed
p[132] = 0.077;	//global quantity 'PFK1_km_fru6p':fixed
p[133] = 0.012;	//global quantity 'PFK1_ki_fru6p':fixed
p[134] = 0.001;	//global quantity 'PFK1_ka_fru26bp':fixed
p[135] = 7.182;	//global quantity 'PFK1_Vmax':fixed
p[136] = 0.001;	//global quantity 'FBP1_ki_fru26bp':fixed
p[137] = 0.0013;	//global quantity 'FBP1_km_fru16bp':fixed
p[138] = 4.326;	//global quantity 'FBP1_Vmax':fixed
p[139] = 9.76299e-05;	//global quantity 'ALD_keq':fixed
p[140] = 0.0071;	//global quantity 'ALD_km_fru16bp':fixed
p[141] = 0.0364;	//global quantity 'ALD_km_dhap':fixed
p[142] = 0.0071;	//global quantity 'ALD_km_grap':fixed
p[143] = 0.0572;	//global quantity 'ALD_ki1_grap':fixed
p[144] = 0.176;	//global quantity 'ALD_ki2_grap':fixed
p[145] = 420;	//global quantity 'ALD_Vmax':fixed
p[146] = 0.054477;	//global quantity 'TPI_keq':fixed
p[147] = 0.59;	//global quantity 'TPI_km_dhap':fixed
p[148] = 0.42;	//global quantity 'TPI_km_grap':fixed
p[149] = 420;	//global quantity 'TPI_Vmax':fixed
p[150] = 0.0867799;	//global quantity 'GAPDH_keq':fixed
p[151] = 0.05;	//global quantity 'GAPDH_k_nad':fixed
p[152] = 0.005;	//global quantity 'GAPDH_k_grap':fixed
p[153] = 3.9;	//global quantity 'GAPDH_k_p':fixed
p[154] = 0.0083;	//global quantity 'GAPDH_k_nadh':fixed
p[155] = 0.0035;	//global quantity 'GAPDH_k_bpg13':fixed
p[156] = 420;	//global quantity 'GAPDH_Vmax':fixed
p[157] = 6.95864;	//global quantity 'PGK_keq':fixed
p[158] = 0.35;	//global quantity 'PGK_k_adp':fixed
p[159] = 0.48;	//global quantity 'PGK_k_atp':fixed
p[160] = 0.002;	//global quantity 'PGK_k_bpg13':fixed
p[161] = 1.2;	//global quantity 'PGK_k_pg3':fixed
p[162] = 420;	//global quantity 'PGK_Vmax':fixed
p[163] = 0.181375;	//global quantity 'PGM_keq':fixed
p[164] = 5;	//global quantity 'PGM_k_pg3':fixed
p[165] = 1;	//global quantity 'PGM_k_pg2':fixed
p[166] = 420;	//global quantity 'PGM_Vmax':fixed
p[167] = 0.054477;	//global quantity 'EN_keq':fixed
p[168] = 1;	//global quantity 'EN_k_pep':fixed
p[169] = 1;	//global quantity 'EN_k_pg2':fixed
p[170] = 35.994;	//global quantity 'EN_Vmax':fixed
p[171] = 3.5;	//global quantity 'PK_n':fixed
p[172] = 3.5;	//global quantity 'PK_n_p':fixed
p[173] = 1.8;	//global quantity 'PK_n_fbp':fixed
p[174] = 1.8;	//global quantity 'PK_n_fbp_p':fixed
p[175] = 1;	//global quantity 'PK_alpha':fixed
p[176] = 1.1;	//global quantity 'PK_alpha_p':fixed
p[177] = 1;	//global quantity 'PK_alpha_end':fixed
p[178] = 0.00016;	//global quantity 'PK_k_fbp':fixed
p[179] = 0.00035;	//global quantity 'PK_k_fbp_p':fixed
p[180] = 0.58;	//global quantity 'PK_k_pep':fixed
p[181] = 1.1;	//global quantity 'PK_k_pep_p':fixed
p[182] = 0.08;	//global quantity 'PK_k_pep_end':fixed
p[183] = 2.3;	//global quantity 'PK_k_adp':fixed
p[184] = 0.08;	//global quantity 'PK_base_act':fixed
p[185] = 0.04;	//global quantity 'PK_base_act_p':fixed
p[186] = 46.2;	//global quantity 'PK_Vmax':fixed
p[187] = 336.957;	//global quantity 'PEPCK_keq':fixed
p[188] = 0.237;	//global quantity 'PEPCK_k_pep':fixed
p[189] = 0.0921;	//global quantity 'PEPCK_k_gdp':fixed
p[190] = 25.5;	//global quantity 'PEPCK_k_co2':fixed
p[191] = 0.0055;	//global quantity 'PEPCK_k_oaa':fixed
p[192] = 0.0222;	//global quantity 'PEPCK_k_gtp':fixed
p[193] = 0;	//global quantity 'PEPCK_Vmax':fixed
p[194] = 546;	//global quantity 'PEPCKM_Vmax':fixed
p[195] = 0.22;	//global quantity 'PC_k_atp':fixed
p[196] = 0.22;	//global quantity 'PC_k_pyr':fixed
p[197] = 3.2;	//global quantity 'PC_k_co2':fixed
p[198] = 0.015;	//global quantity 'PC_k_acoa':fixed
p[199] = 2.5;	//global quantity 'PC_n':fixed
p[200] = 168;	//global quantity 'PC_Vmax':fixed
p[201] = 0.000278321;	//global quantity 'LDH_keq':fixed
p[202] = 0.495;	//global quantity 'LDH_k_pyr':fixed
p[203] = 31.98;	//global quantity 'LDH_k_lac':fixed
p[204] = 0.984;	//global quantity 'LDH_k_nad':fixed
p[205] = 0.027;	//global quantity 'LDH_k_nadh':fixed
p[206] = 12.6;	//global quantity 'LDH_Vmax':fixed
p[207] = 1;	//global quantity 'LACT_keq':fixed
p[208] = 0.8;	//global quantity 'LACT_k_lac':fixed
p[209] = 5.418;	//global quantity 'LACT_Vmax':fixed
p[210] = 1;	//global quantity 'PYRTM_keq':fixed
p[211] = 0.1;	//global quantity 'PYRTM_k_pyr':fixed
p[212] = 42;	//global quantity 'PYRTM_Vmax':fixed
p[213] = 1;	//global quantity 'PEPTM_keq':fixed
p[214] = 0.1;	//global quantity 'PEPTM_k_pep':fixed
p[215] = 33.6;	//global quantity 'PEPTM_Vmax':fixed
p[216] = 0.025;	//global quantity 'PDH_k_pyr':fixed
p[217] = 0.013;	//global quantity 'PDH_k_coa':fixed
p[218] = 0.05;	//global quantity 'PDH_k_nad':fixed
p[219] = 0.035;	//global quantity 'PDH_ki_acoa':fixed
p[220] = 0.036;	//global quantity 'PDH_ki_nadh':fixed
p[221] = 5;	//global quantity 'PDH_alpha_nat':fixed
p[222] = 1;	//global quantity 'PDH_alpha_p':fixed
p[223] = 13.44;	//global quantity 'PDH_Vmax':fixed
p[224] = 266599;	//global quantity 'CS_keq':fixed
p[225] = 0.002;	//global quantity 'CS_k_oaa':fixed
p[226] = 0.016;	//global quantity 'CS_k_acoa':fixed
p[227] = 0.42;	//global quantity 'CS_k_cit':fixed
p[228] = 0.07;	//global quantity 'CS_k_coa':fixed
p[229] = 4.2;	//global quantity 'CS_Vmax':fixed
p[230] = 1;	//global quantity 'NDKGTPM_keq':fixed
p[231] = 1.33;	//global quantity 'NDKGTPM_k_atp':fixed
p[232] = 0.042;	//global quantity 'NDKGTPM_k_adp':fixed
p[233] = 0.15;	//global quantity 'NDKGTPM_k_gtp':fixed
p[234] = 0.031;	//global quantity 'NDKGTPM_k_gdp':fixed
p[235] = 420;	//global quantity 'NDKGTPM_Vmax':fixed
p[236] = 0;	//global quantity 'OAAFLX_Vmax':fixed
p[237] = 0;	//global quantity 'ACOAFLX_Vmax':fixed
p[238] = 0;	//global quantity 'CITFLX_Vmax':fixed
#endif FIXED

#ifdef ASSIGNMENT
y[0] = ct[0]-x[12];	//metabolite 'gtp': reactions
y[1] = ct[1]-1*x[10]-x[19];	//metabolite 'udpglc': reactions
y[2] = ct[2]-x[13];	//metabolite 'gdp_mito': reactions
y[3] = p_c[6]+p_c[5];	//model entity 'nadh_tot':assignment
y[4] = p_c[2]+p_c[3]+p_c[4];	//model entity 'atp_tot':assignment
y[5] = x_c[19]+x_c[10]+y_c[1];	//model entity 'utp_tot':assignment
y[6] = y_c[0]+x_c[12];	//model entity 'gtp_tot':assignment
y[7] = p_c[19]+p_c[20];	//model entity 'nadh_mito_tot':assignment
y[8] = p_c[16]+p_c[17];	//model entity 'atp_mito_tot':assignment
y[9] = x_c[13]+y_c[2];	//model entity 'gtp_mito_tot':assignment
y[10] = p[33]+(p[32]-p[33])*pow(p_c[0],p[35])/(pow(p_c[0],p[35])+pow(p[34],p[35]));	//model entity 'ins':assignment
y[11] = maximum(0.00000000000000000,y[10]-p[33]);	//model entity 'ins_norm':assignment
y[12] = p[37]+(p[36]-p[37])*(1.00000000000000000-pow(p_c[0],p[39])/(pow(p_c[0],p[39])+pow(p[38],p[39])));	//model entity 'glu':assignment
y[13] = maximum(0.00000000000000000,y[12]-p[37]);	//model entity 'glu_norm':assignment
y[14] = p[41]+(p[40]-p[41])*(1.00000000000000000-pow(p_c[0],p[43])/(pow(p_c[0],p[43])+pow(p[42],p[43])));	//model entity 'epi':assignment
y[15] = maximum(0.00000000000000000,y[14]-p[41]);	//model entity 'epi_norm':assignment
y[16] = 0.50000000000000000*(1.00000000000000000-y[11]/(y[11]+p[46])+maximum(y[13]/(y[13]+p[47]),p[45]*y[15]/(y[15]+p[48])));	//model entity 'gamma':assignment
y[17] = pow(x_c[11],p[55])/(pow(x_c[11],p[55])+pow(p[56],p[55]))*(1.00000000000000000-p[58]*x_c[0]/(x_c[0]+p[57]));	//model entity 'GK_gc_free':assignment
y[18] = (1.00000000000000000+p[82])*(p[81]-p_c[11])/(p[81]-p_c[11]+p[82]*p[81]);	//model entity 'GS_storage_factor':assignment
y[19] = p[83]/(x_c[3]+p[84]);	//model entity 'GS_k_udpglc_native':assignment
y[20] = p[85]/(x_c[3]+p[86]);	//model entity 'GS_k_udpglc_phospho':assignment
y[21] = p[51]*p[87]*y[18]*y_c[1]/(y[19]+y_c[1]);	//model entity 'GS_native':assignment
y[22] = p[51]*p[87]*y[18]*y_c[1]/(y[20]+y_c[1]);	//model entity 'GS_phospho':assignment
y[23] = (1.00000000000000000+p[101])*p_c[11]/(p_c[11]+p[101]*p[100]);	//model entity 'GP_fmax':assignment
y[24] = p[51]*p[99]*y[23]*(p[97]+(p[98]-p[97])*p_c[4]/(p_c[4]+p[96]));	//model entity 'GP_vmax_native':assignment
y[25] = y[24]/(p[89]*p[93])*(p_c[11]*p_c[7]-x_c[6]/p[88])/((1.00000000000000000+p_c[11]/p[89])*(1.00000000000000000+p_c[7]/p[93])+1.00000000000000000+x_c[6]/p[91]-1.00000000000000000);	//model entity 'GP_native':assignment
y[26] = p[51]*p[99]*y[23]*exp((-log(2.00000000000000000))/p[95]*x_c[11]);	//model entity 'GP_vmax_phospho':assignment
y[27] = y[26]/(p[90]*p[94])*(p_c[11]*p_c[7]-x_c[6]/p[88])/((1.00000000000000000+p_c[11]/p[90])*(1.00000000000000000+p_c[7]/p[94])+1.00000000000000000+x_c[6]/p[92]-1.00000000000000000);	//model entity 'GP_phospho':assignment
y[28] = p[50]*p[125]*pow(x_c[0],p[119])/(pow(x_c[0],p[119])+pow(p[121],p[119]))*p_c[2]/(p_c[2]+p[123]);	//model entity 'PFK2_native':assignment
y[29] = p[50]*p[125]*pow(x_c[0],p[120])/(pow(x_c[0],p[120])+pow(p[122],p[120]))*p_c[2]/(p_c[2]+p[124]);	//model entity 'PFK2_phospho':assignment
y[30] = p[50]*p[130]/(1.00000000000000000+x_c[0]/p[127])*x_c[21]/(p[126]+x_c[21]);	//model entity 'FBP2_native':assignment
y[31] = p[50]*p[130]/(1.00000000000000000+x_c[0]/p[129])*x_c[21]/(p[128]+x_c[21]);	//model entity 'FBP2_phospho':assignment
y[32] = pow(x_c[16],p[173])/(pow(p[178],p[173])+pow(x_c[16],p[173]));	//model entity 'PK_f':assignment
y[33] = pow(x_c[16],p[174])/(pow(p[179],p[174])+pow(x_c[16],p[174]));	//model entity 'PK_f_p':assignment
y[34] = (1.00000000000000000-y[32])*(p[175]-p[177])+p[177];	//model entity 'PK_alpha_inp':assignment
y[35] = (1.00000000000000000-y[33])*(p[176]-p[177])+p[177];	//model entity 'PK_alpha_p_inp':assignment
y[36] = (1.00000000000000000-y[32])*(p[180]-p[182])+p[182];	//model entity 'PK_pep_inp':assignment
y[37] = (1.00000000000000000-y[33])*(p[181]-p[182])+p[182];	//model entity 'PK_pep_p_inp':assignment
y[38] = p[50]*p[186]*y[34]*pow(x_c[1],p[171])/(pow(y[36],p[171])+pow(x_c[1],p[171]))*p_c[3]/(p_c[3]+p[183])*(p[184]+(1.00000000000000000-p[184])*y[32]);	//model entity 'PK_native':assignment
y[39] = p[50]*p[186]*y[35]*pow(x_c[1],p[172])/(pow(y[37],p[172])+pow(x_c[1],p[172]))*p_c[3]/(p_c[3]+p[183])*(p[185]+(1.00000000000000000-p[185])*y[33]);	//model entity 'PK_phospho':assignment
y[40] = p[50]*p[223]*x_c[7]/(x_c[7]+p[216])*p_c[20]/(p_c[20]+p[218]*(1.00000000000000000+p_c[19]/p[220]))*p_c[18]/(p_c[18]+p[217]*(1.00000000000000000+p_c[14]/p[219]));	//model entity 'PDH_base':assignment
y[41] = y[40]*p[221];	//model entity 'PDH_nat':assignment
y[42] = y[40]*p[222];	//model entity 'PDH_p':assignment
y[43] = ;	//model entity 'HGP':assignment
// WARNING : expression for "ModelValue" "HGP" contains reference to a value in object "GLUT2 glucose transporter" of type "Reaction" which is not supported in this ODE exporter Version.
y[44] = ;	//model entity 'GNG':assignment
// WARNING : expression for "ModelValue" "GNG" contains reference to a value in object "D-Glucose-6-phosphate Isomerase" of type "Reaction" which is not supported in this ODE exporter Version.
y[45] = ;	//model entity 'GLY':assignment
// WARNING : expression for "ModelValue" "GLY" contains reference to a value in object "Glucose 1-phosphate 1,6-phosphomutase" of type "Reaction" which is not supported in this ODE exporter Version.
x_c[0] = x[0]/p[24];	//concentration of metabolite 'fru6p': reactions
x_c[1] = x[1]/p[24];	//concentration of metabolite 'pep': reactions
x_c[2] = x[2]/p[25];	//concentration of metabolite 'oaa_mito': reactions
x_c[3] = x[3]/p[24];	//concentration of metabolite 'glc6p': reactions
x_c[4] = x[4]/p[24];	//concentration of metabolite 'grap': reactions
x_c[5] = x[5]/p[24];	//concentration of metabolite 'pyr': reactions
x_c[6] = x[6]/p[24];	//concentration of metabolite 'glc1p': reactions
x_c[7] = x[7]/p[25];	//concentration of metabolite 'pyr_mito': reactions
x_c[8] = x[8]/p[24];	//concentration of metabolite 'dhap': reactions
x_c[9] = x[9]/p[24];	//concentration of metabolite 'pg3': reactions
x_c[10] = x[10]/p[24];	//concentration of metabolite 'udp': reactions
x_c[11] = x[11]/p[24];	//concentration of metabolite 'glc': reactions
x_c[12] = x[12]/p[24];	//concentration of metabolite 'gdp': reactions
x_c[13] = x[13]/p[25];	//concentration of metabolite 'gtp_mito': reactions
x_c[14] = x[14]/p[24];	//concentration of metabolite 'pp': reactions
x_c[15] = x[15]/p[24];	//concentration of metabolite 'lac': reactions
x_c[16] = x[16]/p[24];	//concentration of metabolite 'fru16bp': reactions
x_c[17] = x[17]/p[24];	//concentration of metabolite 'pg2': reactions
x_c[18] = x[18]/p[25];	//concentration of metabolite 'pep_mito': reactions
x_c[19] = x[19]/p[24];	//concentration of metabolite 'utp': reactions
x_c[20] = x[20]/p[24];	//concentration of metabolite 'bpg13': reactions
x_c[21] = x[21]/p[24];	//concentration of metabolite 'fru26bp': reactions
x_c[22] = x[22]/p[24];	//concentration of metabolite 'oaa': reactions
y_c[0] = y[0]/p[24];	//concentration of metabolite 'gtp': reactions
y_c[1] = y[1]/p[24];	//concentration of metabolite 'udpglc': reactions
y_c[2] = y[2]/p[25];	//concentration of metabolite 'gdp_mito': reactions
p_c[0] = p[0]/p[23];	//concentration of metabolite 'glc_ext': fixed
p_c[1] = p[1]/p[23];	//concentration of metabolite 'lac_ext': fixed
p_c[2] = p[2]/p[24];	//concentration of metabolite 'atp': fixed
p_c[3] = p[3]/p[24];	//concentration of metabolite 'adp': fixed
p_c[4] = p[4]/p[24];	//concentration of metabolite 'amp': fixed
p_c[5] = p[5]/p[24];	//concentration of metabolite 'nad': fixed
p_c[6] = p[6]/p[24];	//concentration of metabolite 'nadh': fixed
p_c[7] = p[7]/p[24];	//concentration of metabolite 'phos': fixed
p_c[8] = p[8]/p[24];	//concentration of metabolite 'co2': fixed
p_c[9] = p[9]/p[24];	//concentration of metabolite 'h2o': fixed
p_c[10] = p[10]/p[24];	//concentration of metabolite 'h': fixed
p_c[11] = p[11]/p[24];	//concentration of metabolite 'glyglc': fixed
p_c[12] = p[12]/p[25];	//concentration of metabolite 'co2_mito': fixed
p_c[13] = p[13]/p[25];	//concentration of metabolite 'phos_mito': fixed
p_c[14] = p[14]/p[25];	//concentration of metabolite 'acoa_mito': fixed
p_c[15] = p[15]/p[25];	//concentration of metabolite 'cit_mito': fixed
p_c[16] = p[16]/p[25];	//concentration of metabolite 'atp_mito': fixed
p_c[17] = p[17]/p[25];	//concentration of metabolite 'adp_mito': fixed
p_c[18] = p[18]/p[25];	//concentration of metabolite 'coa_mito': fixed
p_c[19] = p[19]/p[25];	//concentration of metabolite 'nadh_mito': fixed
p_c[20] = p[20]/p[25];	//concentration of metabolite 'nad_mito': fixed
p_c[21] = p[21]/p[25];	//concentration of metabolite 'h2o_mito': fixed
p_c[22] = p[22]/p[25];	//concentration of metabolite 'h_mito': fixed
#endif ASSIGNMENT

#ifdef FUNCTIONS_HEADERS
double FunctionForGLUT2GlucoseTransporter(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3); 
double FunctionForGlucokinase(double param_0, double param_1, double param_2, double param_3, double param_4, double sub_0, double volume_0, double sub_1, double param_5); 
double FunctionForD_Glucose_6_phosphatePhosphatase(double param_0, double param_1, double volume_0, double sub_0, double param_2); 
double FunctionForD_Glucose_6_phosphateIsomerase(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4); 
double FunctionForGlucose1_phosphate16_phosphomutase(double param_0, double param_1, double param_2, double param_3, double volume_0, double sub_0, double prod_0, double param_4); 
double FunctionForUTPGlucose_1_phosphateUridylyltransferase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double volume_0, double sub_0, double prod_0, double param_6, double prod_1, double sub_1); 
double FunctionForPyrophosphatePhosphohydrolase(double param_0, double param_1, double volume_0, double sub_0, double param_2); 
double FunctionForGlycogenSynthase(double param_0, double param_1, double volume_0, double param_2); 
double FunctionForGlycogen_Phosphorylase(double param_0, double param_1, double volume_0, double param_2); 
double FunctionForNucleoside_diphosphateKinase_ATPGTP_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double volume_0, double sub_1, double prod_1, double param_6); 
double FunctionForNucleoside_diphosphateKinase_ATPUTP_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double volume_0, double param_6, double sub_1, double prod_1); 
double FunctionForATPAMPPhosphotransferase_Adenylatkinase_(double param_0, double param_1, double param_2, double param_3, double param_4, double prod_0, double sub_0, double sub_1, double volume_0, double param_5); 
double FunctionForATPD_fructose_6_phosphate2_phosphotransferase(double param_0, double param_1, double volume_0, double param_2); 
double FunctionForD_Fructose_26_bisphosphate2_phosphohydrolase(double param_0, double param_1, double volume_0, double param_2); 
double FunctionForATPD_fructose_6_phosphate1_phosphotransferase(double param_0, double param_1, double param_2, double param_3, double param_4, double sub_0, double volume_0, double modif_0, double sub_1, double param_5); 
double FunctionForD_Fructose_16_bisphosphate1_phosphohydrolase(double param_0, double param_1, double param_2, double volume_0, double sub_0, double modif_0, double param_3); 
double FunctionForAldolase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double volume_0, double prod_0, double sub_0, double prod_1, double param_7); 
double FunctionForTriosephosphateIsomerase(double param_0, double param_1, double param_2, double param_3, double volume_0, double sub_0, double prod_0, double param_4); 
double FunctionForD_Glyceraldehyde_3_phosphateNADOxidoreductase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double volume_0, double sub_0, double sub_1, double prod_1, double sub_2, double param_7); 
double FunctionForPhosphoglycerateKinase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double sub_0, double prod_0, double sub_1, double volume_0, double prod_1, double param_6); 
double FunctionFor2_Phospho_D_glycerate23_phosphomutase(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4); 
double FunctionFor2_Phospho_D_glucerateHydro_lyase_enolase_(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4); 
double FunctionForPyruvatkinase(double param_0, double param_1, double volume_0, double param_2); 
double FunctionForPEPCKCyto(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double volume_0, double prod_1, double sub_0, double sub_1, double prod_2, double param_7); 
double FunctionForPEPCKMito(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double prod_1, double sub_0, double volume_0, double sub_1, double prod_2, double param_7); 
double FunctionForPyruvateCarboxylase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double modif_0, double sub_0, double sub_1, double volume_0, double sub_2, double param_6); 
double FunctionForLactateDehydrogenase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double volume_0, double prod_0, double prod_1, double sub_0, double sub_1, double param_6); 
double FunctionForLactateTransport_import_(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3); 
double FunctionForPyruvateTransport_mito_(double param_0, double param_1, double param_2, double sub_0, double prod_0, double param_3); 
double FunctionForPEPTransport_exportMito_(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3); 
double FunctionForPyruvateDehydrogenase(double param_0, double param_1, double param_2, double volume_0); 
double FunctionForCitrateSynthase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double sub_0, double prod_0, double prod_1, double volume_0, double sub_1, double param_6); 
double FunctionForNucleoside_diphosphateKinase_ATPGTP_Mito(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double sub_1, double prod_1, double volume_0, double param_6); 
double FunctionForOxalacetateInflux(double param_0, double volume_0, double param_1); 
double FunctionForAcetyl_coaEfflux(double param_0, double volume_0, double param_1); 
double FunctionForCitrateEfflux(double param_0, double volume_0, double param_1); 
double maximum(double varb_0, double varb_1); 
#endif FUNCTIONS_HEADERS

#ifdef FUNCTIONS
double FunctionForGLUT2GlucoseTransporter(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3) 	//Function for GLUT2 glucose transporter
{return  param_3*param_0/param_2*(sub_0-prod_0/param_1)/(1.00000000000000000+sub_0/param_2+prod_0/param_2);} 
double FunctionForGlucokinase(double param_0, double param_1, double param_2, double param_3, double param_4, double sub_0, double volume_0, double sub_1, double param_5) 	//Function for Glucokinase
{return  param_5*param_0*param_1*sub_0/(param_2+sub_0)*pow(sub_1,param_4)/(pow(sub_1,param_4)+pow(param_3,param_4))/volume_0;} 
double FunctionForD_Glucose_6_phosphatePhosphatase(double param_0, double param_1, double volume_0, double sub_0, double param_2) 	//Function for D-Glucose-6-phosphate Phosphatase
{return  param_2*param_0*sub_0/(param_1+sub_0)/volume_0;} 
double FunctionForD_Glucose_6_phosphateIsomerase(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4) 	//Function for D-Glucose-6-phosphate Isomerase
{return  param_4*param_0/param_3*(sub_0-prod_0/param_1)/(1.00000000000000000+sub_0/param_3+prod_0/param_2)/volume_0;} 
double FunctionForGlucose1_phosphate16_phosphomutase(double param_0, double param_1, double param_2, double param_3, double volume_0, double sub_0, double prod_0, double param_4) 	//Function for Glucose 1-phosphate 1,6-phosphomutase
{return  param_4*param_0/param_2*(sub_0-prod_0/param_1)/(1.00000000000000000+sub_0/param_2+prod_0/param_3)/volume_0;} 
double FunctionForUTPGlucose_1_phosphateUridylyltransferase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double volume_0, double sub_0, double prod_0, double param_6, double prod_1, double sub_1) 	//Function for UTP:Glucose-1-phosphate uridylyltransferase
{return  param_6*param_0/(param_5*param_2)*(sub_1*sub_0-prod_1*prod_0/param_1)/((1.00000000000000000+sub_1/param_5)*(1.00000000000000000+sub_0/param_2)+(1.00000000000000000+prod_1/param_4)*(1.00000000000000000+prod_0/param_3)-1.00000000000000000)/volume_0;} 
double FunctionForPyrophosphatePhosphohydrolase(double param_0, double param_1, double volume_0, double sub_0, double param_2) 	//Function for Pyrophosphate phosphohydrolase
{return  param_2*param_0*sub_0/(sub_0+param_1)/volume_0;} 
double FunctionForGlycogenSynthase(double param_0, double param_1, double volume_0, double param_2) 	//Function for Glycogen synthase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForGlycogen_Phosphorylase(double param_0, double param_1, double volume_0, double param_2) 	//Function for Glycogen-Phosphorylase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForNucleoside_diphosphateKinase_ATPGTP_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double volume_0, double sub_1, double prod_1, double param_6) 	//Function for Nucleoside-diphosphate kinase (ATP, GTP)
{return  param_6*param_0/(param_3*param_4)*(sub_0*sub_1-prod_0*prod_1/param_1)/((1.00000000000000000+sub_0/param_3)*(1.00000000000000000+sub_1/param_4)+(1.00000000000000000+prod_0/param_2)*(1.00000000000000000+prod_1/param_5)-1.00000000000000000)/volume_0;} 
double FunctionForNucleoside_diphosphateKinase_ATPUTP_(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double volume_0, double param_6, double sub_1, double prod_1) 	//Function for Nucleoside-diphosphate kinase (ATP, UTP)
{return  param_6*param_0/(param_3*param_4)*(sub_0*sub_1-prod_0*prod_1/param_1)/((1.00000000000000000+sub_0/param_3)*(1.00000000000000000+sub_1/param_4)+(1.00000000000000000+prod_0/param_2)*(1.00000000000000000+prod_1/param_5)-1.00000000000000000)/volume_0;} 
double FunctionForATPAMPPhosphotransferase_Adenylatkinase_(double param_0, double param_1, double param_2, double param_3, double param_4, double prod_0, double sub_0, double sub_1, double volume_0, double param_5) 	//Function for ATP:AMP phosphotransferase (Adenylatkinase)
{return  param_5*param_0/(param_4*param_3)*(sub_1*sub_0-prod_0*prod_0/param_1)/((1.00000000000000000+sub_1/param_4)*(1.00000000000000000+sub_0/param_3)+(1.00000000000000000+prod_0/param_2)*(1.00000000000000000+prod_0/param_2)-1.00000000000000000)/volume_0;} 
double FunctionForATPD_fructose_6_phosphate2_phosphotransferase(double param_0, double param_1, double volume_0, double param_2) 	//Function for ATP:D-fructose-6-phosphate 2-phosphotransferase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForD_Fructose_26_bisphosphate2_phosphohydrolase(double param_0, double param_1, double volume_0, double param_2) 	//Function for D-Fructose-2,6-bisphosphate 2-phosphohydrolase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForATPD_fructose_6_phosphate1_phosphotransferase(double param_0, double param_1, double param_2, double param_3, double param_4, double sub_0, double volume_0, double modif_0, double sub_1, double param_5) 	//Function for ATP:D-fructose-6-phosphate 1-phosphotransferase
{return  param_5*param_0*(1.00000000000000000-1.00000000000000000/(1.00000000000000000+modif_0/param_1))*sub_1*sub_0/(param_2*param_3+param_4*sub_0+param_3*sub_1+sub_0*sub_1)/volume_0;} 
double FunctionForD_Fructose_16_bisphosphate1_phosphohydrolase(double param_0, double param_1, double param_2, double volume_0, double sub_0, double modif_0, double param_3) 	//Function for D-Fructose-1,6-bisphosphate 1-phosphohydrolase
{return  param_3*param_0/(1.00000000000000000+modif_0/param_1)*sub_0/(sub_0+param_2)/volume_0;} 
double FunctionForAldolase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double volume_0, double prod_0, double sub_0, double prod_1, double param_7) 	//Function for Aldolase
{return  param_7*param_0/param_5*(sub_0-prod_1*prod_0/param_1)/(1.00000000000000000+sub_0/param_5+prod_1/param_2+prod_0*(prod_1+param_6)/(param_4*param_2)+sub_0*prod_1/(param_5*param_3))/volume_0;} 
double FunctionForTriosephosphateIsomerase(double param_0, double param_1, double param_2, double param_3, double volume_0, double sub_0, double prod_0, double param_4) 	//Function for Triosephosphate Isomerase
{return  param_4*param_0/param_2*(sub_0-prod_0/param_1)/(1.00000000000000000+sub_0/param_2+prod_0/param_3)/volume_0;} 
double FunctionForD_Glyceraldehyde_3_phosphateNADOxidoreductase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double volume_0, double sub_0, double sub_1, double prod_1, double sub_2, double param_7) 	//Function for D-Glyceraldehyde-3-phosphate:NAD+ oxidoreductase
{return  param_7*param_0/(param_3*param_2*param_5)*(sub_1*sub_0*sub_2-prod_0*prod_1/param_6)/((1.00000000000000000+sub_1/param_3)*(1.00000000000000000+sub_0/param_2)*(1.00000000000000000+sub_2/param_5)+(1.00000000000000000+prod_1/param_4)*(1.00000000000000000+prod_0/param_1)-1.00000000000000000)/volume_0;} 
double FunctionForPhosphoglycerateKinase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double sub_0, double prod_0, double sub_1, double volume_0, double prod_1, double param_6) 	//Function for Phosphoglycerate Kinase
{return  param_6*param_0/(param_1*param_3)*(sub_0*sub_1-prod_0*prod_1/param_5)/((1.00000000000000000+sub_0/param_1)*(1.00000000000000000+sub_1/param_3)+(1.00000000000000000+prod_0/param_2)*(1.00000000000000000+prod_1/param_4)-1.00000000000000000)/volume_0;} 
double FunctionFor2_Phospho_D_glycerate23_phosphomutase(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4) 	//Function for 2-Phospho-D-glycerate 2,3-phosphomutase
{return  param_4*param_0*(sub_0-prod_0/param_3)/(sub_0+param_2*(1.00000000000000000+prod_0/param_1))/volume_0;} 
double FunctionFor2_Phospho_D_glucerateHydro_lyase_enolase_(double param_0, double param_1, double param_2, double param_3, double volume_0, double prod_0, double sub_0, double param_4) 	//Function for 2-Phospho-D-glucerate hydro-lyase (enolase)
{return  param_4*param_0*(sub_0-prod_0/param_3)/(sub_0+param_2*(1.00000000000000000+prod_0/param_1))/volume_0;} 
double FunctionForPyruvatkinase(double param_0, double param_1, double volume_0, double param_2) 	//Function for Pyruvatkinase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForPEPCKCyto(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double volume_0, double prod_1, double sub_0, double sub_1, double prod_2, double param_7) 	//Function for PEPCK cyto
{return  param_7*param_0/(param_4*param_3)*(sub_1*sub_0-prod_2*prod_1*prod_0/param_6)/((1.00000000000000000+sub_1/param_4)*(1.00000000000000000+sub_0/param_3)+(1.00000000000000000+prod_2/param_5)*(1.00000000000000000+prod_1/param_2)*(1.00000000000000000+prod_0/param_1)-1.00000000000000000)/volume_0;} 
double FunctionForPEPCKMito(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double prod_0, double prod_1, double sub_0, double volume_0, double sub_1, double prod_2, double param_7) 	//Function for PEPCK mito
{return  param_7*param_0/(param_4*param_3)*(sub_1*sub_0-prod_2*prod_1*prod_0/param_6)/((1.00000000000000000+sub_1/param_4)*(1.00000000000000000+sub_0/param_3)+(1.00000000000000000+prod_2/param_5)*(1.00000000000000000+prod_1/param_2)*(1.00000000000000000+prod_0/param_1)-1.00000000000000000)/volume_0;} 
double FunctionForPyruvateCarboxylase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double modif_0, double sub_0, double sub_1, double volume_0, double sub_2, double param_6) 	//Function for Pyruvate Carboxylase
{return  param_6*param_0*sub_0/(param_2+sub_0)*sub_2/(param_4+sub_2)*sub_1/(param_3+sub_1)*pow(modif_0,param_5)/(pow(modif_0,param_5)+pow(param_1,param_5))/volume_0;} 
double FunctionForLactateDehydrogenase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double volume_0, double prod_0, double prod_1, double sub_0, double sub_1, double param_6) 	//Function for Lactate Dehydrogenase
{return  param_6*param_0/(param_4*param_3)*(sub_1*sub_0-prod_0*prod_1/param_5)/((1.00000000000000000+sub_0/param_3)*(1.00000000000000000+sub_1/param_4)+(1.00000000000000000+prod_0/param_1)*(1.00000000000000000+prod_1/param_2)-1.00000000000000000)/volume_0;} 
double FunctionForLactateTransport_import_(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3) 	//Function for Lactate transport (import)
{return  param_3*param_0/param_1*(sub_0-prod_0/param_2)/(1.00000000000000000+sub_0/param_1+prod_0/param_1);} 
double FunctionForPyruvateTransport_mito_(double param_0, double param_1, double param_2, double sub_0, double prod_0, double param_3) 	//Function for Pyruvate transport (mito)
{return  param_3*param_0/param_1*(sub_0-prod_0/param_2)/(1.00000000000000000+sub_0/param_1+prod_0/param_1);} 
double FunctionForPEPTransport_exportMito_(double param_0, double param_1, double param_2, double prod_0, double sub_0, double param_3) 	//Function for PEP Transport (export mito)
{return  param_3*param_0/param_1*(sub_0-prod_0/param_2)/(1.00000000000000000+prod_0/param_1+sub_0/param_1);} 
double FunctionForPyruvateDehydrogenase(double param_0, double param_1, double param_2, double volume_0) 	//Function for Pyruvate Dehydrogenase
{return  ((1.00000000000000000-param_2)*param_0+param_2*param_1)/volume_0;} 
double FunctionForCitrateSynthase(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double sub_0, double prod_0, double prod_1, double volume_0, double sub_1, double param_6) 	//Function for Citrate Synthase
{return  param_6*param_0/(param_4*param_1)*(sub_0*sub_1-prod_0*prod_1/param_5)/((1.00000000000000000+sub_0/param_1)*(1.00000000000000000+sub_1/param_4)+(1.00000000000000000+prod_0/param_2)*(1.00000000000000000+prod_1/param_3)-1.00000000000000000)/volume_0;} 
double FunctionForNucleoside_diphosphateKinase_ATPGTP_Mito(double param_0, double param_1, double param_2, double param_3, double param_4, double param_5, double prod_0, double sub_0, double sub_1, double prod_1, double volume_0, double param_6) 	//Function for Nucleoside-diphosphate kinase (ATP, GTP) mito
{return  param_6*param_0/(param_2*param_3)*(sub_0*sub_1-prod_0*prod_1/param_5)/((1.00000000000000000+sub_0/param_2)*(1.00000000000000000+sub_1/param_3)+(1.00000000000000000+prod_0/param_1)*(1.00000000000000000+prod_1/param_4)-1.00000000000000000)/volume_0;} 
double FunctionForOxalacetateInflux(double param_0, double volume_0, double param_1) 	//Function for oxalacetate influx
{return  param_1*param_0/volume_0;} 
double FunctionForAcetyl_coaEfflux(double param_0, double volume_0, double param_1) 	//Function for acetyl-coa efflux
{return  param_1*param_0/volume_0;} 
double FunctionForCitrateEfflux(double param_0, double volume_0, double param_1) 	//Function for citrate efflux
{return  param_1*param_0/volume_0;} 
double maximum(double varb_0, double varb_1) 	//maximum
{return  (varb_0 > varb_1 ? varb_0 : varb_1);} 
#endif FUNCTIONS

#ifdef ODEs
dx[0] = FunctionForD_Glucose_6_phosphateIsomerase(p[68], p[65], p[67], p[66], p[24], x_c[0], x_c[3], p[50])*p[24]-FunctionForATPD_fructose_6_phosphate2_phosphotransferase(y[28], y[29], p[24], y[16])*p[24]+FunctionForD_Fructose_26_bisphosphate2_phosphohydrolase(y[30], y[31], p[24], y[16])*p[24]-FunctionForATPD_fructose_6_phosphate1_phosphotransferase(p[135], p[134], p[133], p[131], p[132], p_c[2], p[24], x_c[21], x_c[0], p[50])*p[24]+FunctionForD_Fructose_16_bisphosphate1_phosphohydrolase(p[138], p[136], p[137], p[24], x_c[16], x_c[21], p[50])*p[24];	// 
dx[1] = FunctionFor2_Phospho_D_glucerateHydro_lyase_enolase_(p[170], p[168], p[169], p[167], p[24], x_c[1], x_c[17], p[50])*p[24]-FunctionForPyruvatkinase(y[38], y[39], p[24], y[16])*p[24]+FunctionForPEPCKCyto(p[193], p[190], p[189], p[192], p[191], p[188], p[187], p_c[8], p[24], x_c[12], y_c[0], x_c[22], x_c[1], p[50])*p[24]+FunctionForPEPTransport_exportMito_(p[215], p[214], p[213], x_c[1], x_c[18], p[50]);	// 
dx[2] = -FunctionForPEPCKMito(p[194], p[190], p[189], p[192], p[191], p[188], p[187], p_c[12], y_c[2], x_c[13], p[25], x_c[2], x_c[18], p[50])*p[25]+FunctionForPyruvateCarboxylase(p[200], p[198], p[195], p[197], p[196], p[199], p_c[14], p_c[16], p_c[12], p[25], x_c[7], p[50])*p[25]-FunctionForCitrateSynthase(p[229], p[226], p[227], p[228], p[225], p[224], p_c[14], p_c[15], p_c[18], p[25], x_c[2], p[50])*p[25]+FunctionForOxalacetateInflux(p[236], p[25], p[50])*p[25];	// 
dx[3] = FunctionForGlucokinase(p[62], y[17], p[61], p[60], p[59], p_c[2], p[24], x_c[11], p[50])*p[24]-FunctionForD_Glucose_6_phosphatePhosphatase(p[64], p[63], p[24], x_c[3], p[50])*p[24]-FunctionForD_Glucose_6_phosphateIsomerase(p[68], p[65], p[67], p[66], p[24], x_c[0], x_c[3], p[50])*p[24]+FunctionForGlucose1_phosphate16_phosphomutase(p[72], p[69], p[71], p[70], p[24], x_c[6], x_c[3], p[51])*p[24];	// 
dx[4] = FunctionForAldolase(p[145], p[139], p[143], p[144], p[141], p[140], p[142], p[24], x_c[8], x_c[16], x_c[4], p[50])*p[24]+FunctionForTriosephosphateIsomerase(p[149], p[146], p[147], p[148], p[24], x_c[8], x_c[4], p[50])*p[24]-FunctionForD_Glyceraldehyde_3_phosphateNADOxidoreductase(p[156], p[155], p[152], p[151], p[154], p[153], p[150], x_c[20], p[24], x_c[4], p_c[5], p_c[6], p_c[7], p[50])*p[24];	// 
dx[5] = FunctionForPyruvatkinase(y[38], y[39], p[24], y[16])*p[24]-FunctionForLactateDehydrogenase(p[206], p[203], p[204], p[205], p[202], p[201], p[24], x_c[15], p_c[5], p_c[6], x_c[5], p[50])*p[24]-FunctionForPyruvateTransport_mito_(p[212], p[211], p[210], x_c[5], x_c[7], p[50]);	// 
dx[6] = -FunctionForGlucose1_phosphate16_phosphomutase(p[72], p[69], p[71], p[70], p[24], x_c[6], x_c[3], p[51])*p[24]-FunctionForUTPGlucose_1_phosphateUridylyltransferase(p[78], p[73], p[75], p[77], p[76], p[74], p[24], x_c[6], x_c[14], p[51], y_c[1], x_c[19])*p[24]+FunctionForGlycogen_Phosphorylase(y[25], y[27], p[24], y[16])*p[24];	// 
dx[7] = -FunctionForPyruvateCarboxylase(p[200], p[198], p[195], p[197], p[196], p[199], p_c[14], p_c[16], p_c[12], p[25], x_c[7], p[50])*p[25]+FunctionForPyruvateTransport_mito_(p[212], p[211], p[210], x_c[5], x_c[7], p[50])-FunctionForPyruvateDehydrogenase(y[41], y[42], y[16], p[25])*p[25];	// 
dx[8] = FunctionForAldolase(p[145], p[139], p[143], p[144], p[141], p[140], p[142], p[24], x_c[8], x_c[16], x_c[4], p[50])*p[24]-FunctionForTriosephosphateIsomerase(p[149], p[146], p[147], p[148], p[24], x_c[8], x_c[4], p[50])*p[24];	// 
dx[9] = FunctionForPhosphoglycerateKinase(p[162], p[158], p[159], p[160], p[161], p[157], p_c[3], p_c[2], x_c[20], p[24], x_c[9], p[50])*p[24]-FunctionFor2_Phospho_D_glycerate23_phosphomutase(p[166], p[165], p[164], p[163], p[24], x_c[17], x_c[9], p[50])*p[24];	// 
dx[10] = FunctionForGlycogenSynthase(y[21], y[22], p[24], y[16])*p[24]-FunctionForNucleoside_diphosphateKinase_ATPUTP_(p[113], p[108], p[110], p[109], p[112], p[111], p_c[3], p_c[2], p[24], p[51], x_c[10], x_c[19])*p[24];	// 
dx[11] = FunctionForGLUT2GlucoseTransporter(p[54], p[52], p[53], x_c[11], p_c[0], p[50])-FunctionForGlucokinase(p[62], y[17], p[61], p[60], p[59], p_c[2], p[24], x_c[11], p[50])*p[24]+FunctionForD_Glucose_6_phosphatePhosphatase(p[64], p[63], p[24], x_c[3], p[50])*p[24];	// 
dx[12] = -FunctionForNucleoside_diphosphateKinase_ATPGTP_(p[107], p[102], p[104], p[103], p[106], p[105], p_c[3], p_c[2], p[24], x_c[12], y_c[0], p[50])*p[24]+FunctionForPEPCKCyto(p[193], p[190], p[189], p[192], p[191], p[188], p[187], p_c[8], p[24], x_c[12], y_c[0], x_c[22], x_c[1], p[50])*p[24];	// 
dx[13] = -FunctionForPEPCKMito(p[194], p[190], p[189], p[192], p[191], p[188], p[187], p_c[12], y_c[2], x_c[13], p[25], x_c[2], x_c[18], p[50])*p[25]+FunctionForNucleoside_diphosphateKinase_ATPGTP_Mito(p[235], p[232], p[231], p[234], p[233], p[230], p_c[17], p_c[16], y_c[2], x_c[13], p[25], p[50])*p[25];	// 
dx[14] = FunctionForUTPGlucose_1_phosphateUridylyltransferase(p[78], p[73], p[75], p[77], p[76], p[74], p[24], x_c[6], x_c[14], p[51], y_c[1], x_c[19])*p[24]-FunctionForPyrophosphatePhosphohydrolase(p[80], p[79], p[24], x_c[14], p[51])*p[24];	// 
dx[15] = FunctionForLactateDehydrogenase(p[206], p[203], p[204], p[205], p[202], p[201], p[24], x_c[15], p_c[5], p_c[6], x_c[5], p[50])*p[24]+FunctionForLactateTransport_import_(p[209], p[208], p[207], x_c[15], p_c[1], p[50]);	// 
dx[16] = FunctionForATPD_fructose_6_phosphate1_phosphotransferase(p[135], p[134], p[133], p[131], p[132], p_c[2], p[24], x_c[21], x_c[0], p[50])*p[24]-FunctionForD_Fructose_16_bisphosphate1_phosphohydrolase(p[138], p[136], p[137], p[24], x_c[16], x_c[21], p[50])*p[24]-FunctionForAldolase(p[145], p[139], p[143], p[144], p[141], p[140], p[142], p[24], x_c[8], x_c[16], x_c[4], p[50])*p[24];	// 
dx[17] = FunctionFor2_Phospho_D_glycerate23_phosphomutase(p[166], p[165], p[164], p[163], p[24], x_c[17], x_c[9], p[50])*p[24]-FunctionFor2_Phospho_D_glucerateHydro_lyase_enolase_(p[170], p[168], p[169], p[167], p[24], x_c[1], x_c[17], p[50])*p[24];	// 
dx[18] = FunctionForPEPCKMito(p[194], p[190], p[189], p[192], p[191], p[188], p[187], p_c[12], y_c[2], x_c[13], p[25], x_c[2], x_c[18], p[50])*p[25]-FunctionForPEPTransport_exportMito_(p[215], p[214], p[213], x_c[1], x_c[18], p[50]);	// 
dx[19] = -FunctionForUTPGlucose_1_phosphateUridylyltransferase(p[78], p[73], p[75], p[77], p[76], p[74], p[24], x_c[6], x_c[14], p[51], y_c[1], x_c[19])*p[24]+FunctionForNucleoside_diphosphateKinase_ATPUTP_(p[113], p[108], p[110], p[109], p[112], p[111], p_c[3], p_c[2], p[24], p[51], x_c[10], x_c[19])*p[24];	// 
dx[20] = FunctionForD_Glyceraldehyde_3_phosphateNADOxidoreductase(p[156], p[155], p[152], p[151], p[154], p[153], p[150], x_c[20], p[24], x_c[4], p_c[5], p_c[6], p_c[7], p[50])*p[24]-FunctionForPhosphoglycerateKinase(p[162], p[158], p[159], p[160], p[161], p[157], p_c[3], p_c[2], x_c[20], p[24], x_c[9], p[50])*p[24];	// 
dx[21] = FunctionForATPD_fructose_6_phosphate2_phosphotransferase(y[28], y[29], p[24], y[16])*p[24]-FunctionForD_Fructose_26_bisphosphate2_phosphohydrolase(y[30], y[31], p[24], y[16])*p[24];	// 
dx[22] = -FunctionForPEPCKCyto(p[193], p[190], p[189], p[192], p[191], p[188], p[187], p_c[8], p[24], x_c[12], y_c[0], x_c[22], x_c[1], p[50])*p[24];	// 
#endif ODEs
