section "b03_m7_180"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0307180_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It's almost opening time. Let's go.");
    Character_Chara_GS2(7, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, Sensei!\nThe entrance is on the other side!");
    SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
    Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_BlinkStart(7, 2, (#1), 2);
    Character_ChFace(1, 3, 3);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0307180_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Oh.\nWell then, let's head over there.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(7, "NON");
    Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0307180_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Ah, the seats. Watch your step.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M7", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M7", 185);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M7", 187);
        }
    }
