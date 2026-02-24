section "b03_m3_140"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303140_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "There are 5 minutes until it starts.\nWe arrived at a good time.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(3, "NON");
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303140_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... We have got quite the good spot.\nNow all that is left is to wait for\nit to start.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, that's right.");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M3", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M3", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M3", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M3", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M3", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M3", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M3", 147);
        }
    }
