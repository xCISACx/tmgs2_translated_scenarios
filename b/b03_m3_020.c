section "b03_m3_020"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to walk along the Brick\nPathway?");
        Voice_PlayVoice("B0303020_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, I do not mind.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303020_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah. Shall we just take it easy?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 21);
            break ;
            case 1:
            Voice_PlayVoice("B0303020_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The Observatory...\nRight, let us go there.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303020_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThis place has quite a good view.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303020_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, let us go there.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 21);
            break ;
            case 1:
            Voice_PlayVoice("B0303020_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Does it go out to the ocean?\nAlright, let us ride that.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303020_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... What a magnificent vessel.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 24);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to walk on the Brick Pathway?", "Let's go to the Observatory.", "I want to ride the Sightseeing Cruise.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303020_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, let us go there.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 21);
            break ;
            case 1:
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("B0303020_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What a good idea. Let us go there.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303020_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Ah, what a nice view.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 23);
            break ;
            case 2:
            Voice_PlayVoice("B0303020_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Does it go out to the ocean?\nAlright, let us ride that.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303020_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... What a magnificent vessel.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 24);
            break ;
            }
        }
    }
