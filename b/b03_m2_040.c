section "b03_m2_040"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302040_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Has it started...? ...\nThere's no need to rush since we've\ngot reserved seats.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(2, "NON");
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wow, there's so many people.");
    Voice_PlayVoice("B0302040_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Yeah....\nIt looks like it's starting.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(7) == 1){
        System_Call_GS2("B04", "M2", 41);
        }
    else if (Date_ChkDateOpen(8) == 1){
        System_Call_GS2("B04", "M2", 42);
        }
    else if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M2", 43);
        }
    else if (Date_ChkDateOpen(10) == 1){
        System_Call_GS2("B04", "M2", 44);
        }
    else if (Date_ChkDateOpen(11) == 1){
        System_Call_GS2("B04", "M2", 45);
        }
    else if (Date_ChkDateOpen(12) == 1){
        System_Call_GS2("B04", "M2", 46);
        }
    }
