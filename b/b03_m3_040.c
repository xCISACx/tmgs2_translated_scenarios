section "b03_m3_040"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303040_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "...\nWe came at the right time, not too\nearly nor too late.\nLet us go in before it gets crowded.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(3, "NON");
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303040_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Our seats are... here.\nThis is not a bad spot.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah!");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(7) == 1){
        System_Call_GS2("B04", "M3", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M3", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M3", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M3", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M3", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M3", 46);
        }
    }
