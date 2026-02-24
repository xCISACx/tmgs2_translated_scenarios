section "b03_m4_030"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        Voice_PlayVoice("B0304030_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Alright! well, let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0304030_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, the Orca show is coming up.\nWhat do you want to do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well...");
        Message_MsgSel("Let's enter the Aquarium", "Let's watch the Orca Show");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, yeah.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then let's head over there!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0304030_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So... Where do you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well..");
        Message_MsgSel("Let's go to the Aquarium", "Let's go see the whale shark in the huge tank");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so? Then let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Awesome! This will be interesting!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0304030_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So... Where do you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well...");
        Message_MsgSel("Let's go to the Aquarium", "Let's go watch the Orca Show", "Let's go see the whale shark in the huge tank");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so? Then let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then let's head over there.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 32);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304030_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Awesome! This will be interesting!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 33);
            break ;
            }
        }
    }
