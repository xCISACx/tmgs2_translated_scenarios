section "b03_m5_040"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305040_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "There aren't that many people.\nShould we hurry?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(5, "NON");
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305040_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "It was by a hair, but thank gosh we\nmade it in time～.");
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
        System_Call_GS2("B04", "M5", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M5", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M5", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M5", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M5", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M5", 46);
        }
    }
