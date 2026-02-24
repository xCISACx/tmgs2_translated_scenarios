section "b03_m1_210"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301210_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "For the time being, let's just go\nin.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 211);
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_MsgSel("Ask to go to Puppy and Kitten Land.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Puppy and kittens...\nIn other words, dogs and cats...\nAlright then.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 212);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It seems like the entrance is over\nthere.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Message_MsgSel("Let's go see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I agree.\nSince we're here, we have to go see\nthe rare creatures.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 213);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What's wrong? Ah, whatever.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Message_MsgSel("Do you want to go to Puppy and Kitten Land?", "Let's go see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Puppies and kittens...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 212);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I agree.\nSince we're here, we have to go see\nthe rare creatures.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 213);
            break ;
            case 2:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301210_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What's wrong? Ah, whatever.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 211);
            break ;
            }
        }
    }
