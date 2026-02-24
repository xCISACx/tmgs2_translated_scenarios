section "b03_m2_020"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk along the Brick\nPathway?");
        Voice_PlayVoice("B0302020_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Okay.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 21);
            break ;
            case 1:
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302020_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Are you going to...\ngo up that thing?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Walking... huh.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 21);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Cruise...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302020_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's try it out.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 24);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Walking... huh.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 21);
            break ;
            case 1:
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302020_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "As if you could go all the way up.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 23);
            break ;
            case 2:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302020_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Cruise...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302020_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's try it out.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 24);
            break ;
            }
        }
    }
