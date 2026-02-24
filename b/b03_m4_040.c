section "b03_m4_040"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(0, 0, 10);
    Character_ChFace(0, 4, 1);
    Background_Bg_GS2("BG_WF400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304040_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Awesome! I'm real excited!\nOkay, let's go in!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "NON");
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304040_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "This is a very good seat!\nIt's a pleasure!");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah!");
    Message_SkinshipSet(0);
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_ChkSpEvent("B05", "M4", 1) == 0){
        if (Date_ChkDateOpen(7) == 1){
            System_Call_GS2("B04", "M4", 41);
            }
        else if (Date_ChkDateOpen(8) == 1){
            System_Call_GS2("B04", "M4", 42);
            }
        else if (Date_ChkDateOpen(9) == 1){
            System_Call_GS2("B04", "M4", 43);
            }
        else if (Date_ChkDateOpen(10) == 1){
            System_Call_GS2("B04", "M4", 44);
            }
        else if (Date_ChkDateOpen(11) == 1){
            System_Call_GS2("B04", "M4", 45);
            }
        else if (Date_ChkDateOpen(12) == 1){
            System_Call_GS2("B04", "M4", 46);
            }
        }
    else {
        System_Call_GS2("B05", "M4", 1);
        }
    }
