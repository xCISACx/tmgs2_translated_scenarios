section "w03_g3_000"{
    System_GlobalWork(4, 0, 0);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, she's here...!)");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Nishimoto＊＊｝!");
    Character_Chara_GS2(12, "G3_04F", 0);
    Voice_PlayVoice("W0312000_L00000", #1, "W0312000_L00001");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "Aah～! ｛主人公｝.\nI was totally waiting for you.\nI was getting worried.");
    Voice_PlayVoice("W0312000_L00100", #1, "");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "Come on, let's hurry!");
    Character_Chara_GS2(12, "NON");
    System_Call_GS2("W04", "M4", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W04", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 2){
        System_Call_GS2("W04", "M2", 0);
        }
    else if (Date_GetDateOption(8) == 3){
        System_Call_GS2("W04", "M3", 0);
        }
    else if (Date_GetDateOption(8) == 5){
        System_Call_GS2("W04", "M5", 0);
        }
    else if (Date_GetDateOption(8) == 6){
        System_Call_GS2("W04", "M6", 0);
        }
    System_Call_GS2("W05", "G3", 0);
    System_Call_GS2("W06", "G3", 0);
    }
