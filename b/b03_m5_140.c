section "b03_m5_140"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305140_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "It's about to start.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(5, "NON");
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 0, 11);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305140_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Wah, it's crowded...\nIt must be a popular performance.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, you're right.");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M5", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M5", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M5", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M5", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M5", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M5", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M5", 147);
        }
    }
