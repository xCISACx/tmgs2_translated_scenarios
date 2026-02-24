section "q11_m1_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(1, 130) == 3){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("Q0201000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Today's a free day...\nHave you made any plans?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, I haven't decided on anything,\nyet.");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("Q0201000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, there's a guide... I think?\nActually, I haven't checked at\nall...");
        Message_MsgSel("Okay, let's go together!", "I'm glad you asked, but...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0201000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm saved.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 1);
            System_Call_GS2("Q16", "M1", 0);
            System_Call_GS2("Q17", "M1", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("Q0201000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's cold... It can't be helped.\nI'll hit up another place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all of that trouble\nto invite me.\nIt feels like I've done something\nbad...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else if (Parameter_GetCh1Param(1, 130) >= 4){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q0201000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, today's a free day.\nHave you decided on your schedule,\nyet?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, I haven't decided anything, yet.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0201000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Lucky.\nWell, do you want to go around\ntogether?\nI've been wanting to go.");
        Message_MsgSel("Okay, let's go together!", "I'm sorry, but no...");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("Q0201000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you ready to leave then?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 1);
            System_Call_GS2("Q16", "M1", 10);
            System_Call_GS2("Q17", "M1", 0);
            break ;
            case 1:
            Voice_PlayVoice("Q0201000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aah, I see... Well, later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all of that trouble\nto invite me.\nIt feels like I've done something\nbad...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
