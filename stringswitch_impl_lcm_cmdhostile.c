typedef enum {
	stringswitch_enumerator_default_member_name(lcm_cmdhostile),
	stringswitch_enumerator_member_name(lcm_cmdhostile, npc),
	stringswitch_enumerator_member_name(lcm_cmdhostile, shot),
	stringswitch_enumerator_member_name(lcm_cmdhostile, enemy),
	stringswitch_enumerator_member_name(lcm_cmdhostile, player),
	stringswitch_enumerator_member_name(lcm_cmdhostile, obstacle),
} stringswitch_enumerator_name(lcm_cmdhostile);

static int stringswitch_enumerator_eval_func(lcm_cmdhostile) (char* str, size_t l) {
	switch(l) {
		case 3:
			if(str[0]!='n') goto main_default;
			if(str[1]!='p') goto main_default;
			if(str[2]!='c') goto main_default;
			return stringswitch_enumerator_member_name(lcm_cmdhostile, npc);
		case 4:
			if(str[0]!='s') goto main_default;
			if(str[1]!='h') goto main_default;
			if(str[2]!='o') goto main_default;
			if(str[3]!='t') goto main_default;
			return stringswitch_enumerator_member_name(lcm_cmdhostile, shot);
		case 5:
			if(str[0]!='e') goto main_default;
			if(str[1]!='n') goto main_default;
			if(str[2]!='e') goto main_default;
			if(str[3]!='m') goto main_default;
			if(str[4]!='y') goto main_default;
			return stringswitch_enumerator_member_name(lcm_cmdhostile, enemy);
		case 6:
			if(str[0]!='p') goto main_default;
			if(str[1]!='l') goto main_default;
			if(str[2]!='a') goto main_default;
			if(str[3]!='y') goto main_default;
			if(str[4]!='e') goto main_default;
			if(str[5]!='r') goto main_default;
			return stringswitch_enumerator_member_name(lcm_cmdhostile, player);
		case 8:
			if(str[0]!='o') goto main_default;
			if(str[1]!='b') goto main_default;
			if(str[2]!='s') goto main_default;
			if(str[3]!='t') goto main_default;
			if(str[4]!='a') goto main_default;
			if(str[5]!='c') goto main_default;
			if(str[6]!='l') goto main_default;
			if(str[7]!='e') goto main_default;
			return stringswitch_enumerator_member_name(lcm_cmdhostile, obstacle);
		default:
			main_default:
			return stringswitch_enumerator_default_member_name(lcm_cmdhostile);
	}
}
