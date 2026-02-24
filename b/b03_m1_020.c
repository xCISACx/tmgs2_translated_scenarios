section "b03_m1_020"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
    Character_ChFace(1, 2, 0);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk along the Brick\nPathway?");
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301020_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay. Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0301020_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0301020_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301020_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "When I look up at it like this...\nIt's quite massive.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0301020_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0301020_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah! That's a good idea. I agree.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301020_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go to the deck!\nI want to see the bow of the ship\ncutting through the waves.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 24);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0301020_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0301020_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301020_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's so massive that it's kinda\nmessing up my sense of perception...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 23);
            break ;
            case 2:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0301020_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh! That's a good idea. I agree.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301020_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go to the deck!\nI want to see the bow of the ship\ncutting through the waves.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 24);
            break ;
            }
        }
    }
