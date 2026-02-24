section "b03_m4_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304070_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is the perfect view!\nViewing the cherry blossoms puts me\nat ease.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 73);
        }
    else if (Date_ChkDateOpen(20) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304070_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This feels good...\nWant to walk for a while?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 72);
        }
    else if (Date_ChkDateOpen(21) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304070_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Argh, it's hot!\nBy the way, where do you wanna go?");
        Message_MsgSel("Let's go to the water fountain.", "Walk around the avenue");
        switch (Message_TextSelect()){
            case 0:
            Message_PauseSkinship();
            Voice_PlayVoice("B0304070_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sounds good.\nLet's enjoy the cool air for a\nlittle bit then we can go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Alright.");
            Message_SkinshipSet(0);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 71);
            break ;
            case 1:
            Message_PauseSkinship();
            Voice_PlayVoice("B0304070_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let's move and go in the shade of a\ntree.\nI seem to be getting tanned.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_SkinshipSet(0);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 74);
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304070_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It feels good to take a walk in this\nseason～!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304070_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's cold...\nLet's walk to keep warm.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 76);
        }
    }
