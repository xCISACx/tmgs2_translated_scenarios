section "b03_m4_210"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        Voice_PlayVoice("B0304210_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well, where do you want to go?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 211);
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Let's go to Puppy and Kitten Land.", "Don't invite");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0304210_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, alright! Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 212);
            break ;
            case 1:
            Voice_PlayVoice("B0304210_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so? Where do you want to go?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Let's go watch the White Tiger.", "Don't invite.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0304210_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, good! Let's go!!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 213);
            break ;
            case 1:
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0304210_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Where do you want to go?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Want to go to Puppy and Kitten Land?", "Let's go see the White Tiger.", "Don't invite");
        switch (Message_TextSelect()){
            case 0:
            Message_PauseSkinship();
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0304210_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, good.\nBut why do you want to see a kitty\ncat?");
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            Character_ChFace(1, 4, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304210_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "W-What's up with those eyes!? ...\nDogs and cats! Here sounds good!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 212);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0304210_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, alright! Let's go!!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 213);
            break ;
            case 2:
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0304210_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Where do you want to go?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 211);
            break ;
            }
        }
    }
