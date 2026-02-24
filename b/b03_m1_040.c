section "b03_m1_040"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301040_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Here, huh.\nThere's a lot of people...");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "NON");
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301040_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Our seats are... here.\nCan you see the front properly?");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(7) == 1){
        System_Call_GS2("B04", "M1", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M1", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M1", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M1", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M1", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M1", 46);
        }
    Character_Chara_GS2(1, "NON");
    }
