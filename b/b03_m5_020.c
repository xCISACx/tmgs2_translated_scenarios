section "b03_m5_020"{
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk along the Brick\nPathway?");
        Voice_PlayVoice("B0305020_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That sounds good.\nOkay, let's do that.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305020_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The atmosphere over there is\namazing.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305020_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nI wonder what kind of view there is.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305020_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh... It's actually quite short.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305020_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305020_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "A date on the water.\nHow amazing▼");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305020_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The wind feels nice～...\nAh, watch out so that you don't get\nsprayed with water.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, thanks.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 24);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305020_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Voice_PlayVoice("B0305020_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nI wonder what kind of view there is.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305020_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's not that tall, but the ocean is\nbeautiful.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 23);
            break ;
            case 2:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305020_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "A date on the water.\nHow amazing▼");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305020_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The wind feels nice～...\nAh, watch out so that you don't get\nsprayed with water.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, thanks.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 24);
            break ;
            }
        }
    }
