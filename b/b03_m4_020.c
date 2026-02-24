section "b03_m4_020"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk the brick road?");
        Voice_PlayVoice("B0304020_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, sounds good. I don't mind.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Walk the brick road", "Go to the Bayside Bridge Observatory");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0304020_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright, good.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 21);
            break ;
            case 1:
            Voice_PlayVoice("B0304020_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, awesome.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Walk the Brick Pathway", "Go for a Cruise Ride");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0304020_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The atmosphere's nice. I like it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 21);
            break ;
            case 1:
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0304020_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A cruise!? Ah...\nYou've been going with someone\nelse...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304020_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Umm...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 24);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Message_MsgSel("Walk the Brick Pathway", "Go to the Bayside Bridge Observatory", "Go for a Cruise Ride");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0304020_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The atmosphere is nice. I like it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 21);
            break ;
            case 1:
            Voice_PlayVoice("B0304020_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, should we go?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 23);
            break ;
            case 2:
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0304020_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A cruise!? Ah...\nYou've been going with someone\nelse...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304020_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Umm...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 24);
            break ;
            }
        }
    }
