section "q11_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat are you still doing here?");
        Voice_PlayVoice("Q0202000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI was thinking of what to do with my\nfree day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, that's right.\nI haven't decided yet, either.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q0202000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I see....\nDo you want to go visit places\ntogether?");
        Message_MsgSel("Okay, let's go together!", "I'm glad you asked but...");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0202000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 2);
            System_Call_GS2("Q16", "M2", 0);
            System_Call_GS2("Q17", "M2", 0);
            break ;
            case 1:
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0202000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Roger. See you later.");
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have gone with him\nafter all that trouble he went\nthrough to ask...)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(2, 130) >= 4){
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nWhat are you still doing here?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0202000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What are your plans for today?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, mine?\nI haven't decided on anything,\nyet...\nWhat about you,\n｛Shiba＊＊｝?");
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("Q0202000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I want you to come with me....\nIf that's okay with you.");
        Message_MsgSel("Yeah, of course, let's go!", "I'm sorry, I can't...");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("Q0202000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Good. Then let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 2);
            System_Call_GS2("Q16", "M2", 10);
            System_Call_GS2("Q17", "M2", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("Q0202000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I'm sorry.");
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("Q0202000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Don't worry about it. Goodbye.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have gone with him\nafter all that trouble he went\nthrough to ask...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
