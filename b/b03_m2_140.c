section "b03_m2_140"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302140_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "It looks crowded... It's packed.\nThe air in here is bad, too.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah. But I'm a little excited.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(2, "NON");
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302140_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Hm, is it starting already?");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "It seems like it...");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M2", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M2", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M2", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M2", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M2", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M2", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M2", 147);
        }
    }
