section "b03_m1_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301070_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The cherry blossoms are in full\nbloom now, right?\nShould we go take a look?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 73);
        }
    else if (Date_ChkDateOpen(20) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301070_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's warm... It feels nice too.\nIt's a nice day to take a walk.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 72);
        }
    else if (Date_ChkDateOpen(21) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Message_MsgSel("Do you want to go see the water fountains?", "Let's walk along the avenue.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301070_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's a good idea.\nIt seems cooler over there.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 71);
            break ;
            case 1:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301070_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 74);
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk along the\navenue?");
        Voice_PlayVoice("B0301070_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, it's the season where the\nleaves are changing color.\nLet's go.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301070_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's cold!\nWe'll freeze if we don't move.\nLet's go.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 76);
        }
    }
