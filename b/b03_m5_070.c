section "b03_m5_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 3, (#1), 2);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305070_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The cherry blossoms are in full\nbloom.\nDo you want to go see them?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("D02", "M5", 0) == 0){
            System_Call_GS2("B04", "M5", 73);
            }
        else {
            System_Call_GS2("D02", "M5", 0);
            }
        }
    else if (Date_ChkDateOpen(20) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305070_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It seems like it will be nice if we\ntake it easy walking today.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, let's do that, then.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 72);
        }
    else if (Date_ChkDateOpen(21) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Do you want to go see the water fountains?", "Let's walk along the avenue.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Voice_PlayVoice("B0305070_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems cool there. Yeah, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 71);
            break ;
            case 1:
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305070_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's like a large chorus of cicadas.\nLet's go listen to that.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M5", 1) == 0){
                System_Call_GS2("B04", "M5", 74);
                }
            else {
                System_Call_GS2("B05", "M5", 1);
                }
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305070_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It seems like the leaves have turned\ninto a beautiful color.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305070_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The wind might be cold, but if we\nwalk around a lot, it will get warm.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 76);
        }
    }
