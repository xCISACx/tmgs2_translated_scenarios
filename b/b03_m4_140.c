section "b03_m4_140"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(0, 0, 10);
    Character_ChFace(0, 4, 1);
    Background_Bg_GS2("BG_NE200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304140_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Ah, I'm excited...\nAlright, here we go!!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "NON");
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm excited!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    SoundEffect_PlayStream(1, "SS_T_00_156_S00");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0304140_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Wow!\nThat live concert left me fired up!\n+10,000 for you!");
    System_Wait(60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    SoundEffect_StopStream(1, 40);
    if (Date_ChkDateOpen(36) == 1){
        System_Call_GS2("B04", "M4", 141);
        }
    else if (Date_ChkDateOpen(37) == 1){
        System_Call_GS2("B04", "M4", 142);
        }
    else if (Date_ChkDateOpen(38) == 1){
        System_Call_GS2("B04", "M4", 143);
        }
    else if (Date_ChkDateOpen(39) == 1){
        System_Call_GS2("B04", "M4", 144);
        }
    else if (Date_ChkDateOpen(40) == 1){
        System_Call_GS2("B04", "M4", 145);
        }
    else if (Date_ChkDateOpen(41) == 1){
        System_Call_GS2("B04", "M4", 146);
        }
    else if (Date_ChkDateOpen(42) == 1){
        System_Call_GS2("B04", "M4", 147);
        }
    }
