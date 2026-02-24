section "w03_g2_000"{
    System_GlobalWork(4, 0, 0);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, she's over there!)");
    Message_Who(0);
    Message_MsgDisp("主人公", "Good morning, ｛Onoda＊＊｝!");
    Character_Chara_GS2(11, "G2_04F", 0);
    Voice_PlayVoice("", #1, "W0311000_K00000");
    Message_Who(11);
    Message_MsgDisp("Onoda", "｛主人公｝. Good morning.");
    Voice_PlayVoice("W0311000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "It is a beautiful day today.\nIt seems like it will be a fun day.");
    Character_Chara_GS2(11, "NON");
    System_Call_GS2("W04", "M3", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W04", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 2){
        System_Call_GS2("W04", "M2", 0);
        }
    else if (Date_GetDateOption(8) == 4){
        System_Call_GS2("W04", "M4", 0);
        }
    else if (Date_GetDateOption(8) == 5){
        System_Call_GS2("W04", "M5", 0);
        }
    else if (Date_GetDateOption(8) == 6){
        System_Call_GS2("W04", "M6", 0);
        }
    System_Call_GS2("W05", "G2", 0);
    System_Call_GS2("W06", "G2", 0);
    }
