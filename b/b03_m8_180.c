section "b03_m8_180"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 2, 4);
    Character_ChFace(1, 3, 1);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308180_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Wow, we barely made it on time...\nWe should hurry.");
    Character_ChFace(1, 0, 3);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "NON");
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308180_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Good, we should be seated early.\nMaybe we can view the film better\nover there.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, yes. Thank you.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M8", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M8", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M8", 181);
        }
    }
