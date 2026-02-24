section "q11_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(4, 130) == 3){
        Voice_PlayVoice("Q0204000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nAre you off to your free day?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q0204000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah. How about you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm wondering what I should do.");
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q0204000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm...\nIf you're not sure, do you want to\ntag along with me?");
        Message_MsgSel("Yeah, let's go!", "I'm glad that you asked me, but...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0204000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay, then we're off!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 4);
            System_Call_GS2("Q16", "M4", 0);
            System_Call_GS2("Q17", "M4", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("Q0204000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You have the guts to decline my\ninvitation...\nDon't regret it, okay?");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He took the trouble to ask me.\nDid I make a wrong decision...?)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(4, 130) >= 4){
        Voice_PlayVoice("", 4, "Q0204000_D00500");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝. Howdy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey there, ｛Hariya＊＊｝.\nWhat are you doing here?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("Q0204000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah～... Today's a free day.\nDo you have any plans?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I still haven't decided on anything.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("Q0204000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Seriously!? I'll ask then...");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q0204000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well, would you like to visit places\nwith me?");
        Message_MsgSel("Yeah, let's go together!", "Sorry, but...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0204000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I thought that'd be impossible...\nWhat a relief～...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0204000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I mean, no! Let's go, c'mon!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 4);
            System_Call_GS2("Q16", "M4", 10);
            System_Call_GS2("Q17", "M4", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("Q0204000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I'm sorry.");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("Q0204000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\n*Sigh*");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He took the trouble to ask me.\nDid I make a wrong decision...?)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
