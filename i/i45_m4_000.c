section "i45_m4_000"{
    Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome! Ah, ｛Hariya＊＊｝.");
        Voice_PlayVoice("I4504000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... What are you doing?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm working.\nPlease go and look at what you like.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4504000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You don't have to tell me.\nI come here often.");
        Voice_PlayVoice("I4504000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It looks like...\nthere aren't any new stuff.\nI'll leave. Work hard.");
        Character_Chara_GS2(4, "NON");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Voice_PlayVoice("", 4, "I4504000_D00300");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝. Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome, ｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4504000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, uhh...\nYou got any wallets that have chains\nattached to it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "We don't have anything like that...\nI'll try asking the manager if we\ncan order some.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4504000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, aren't you thoughtful.\nI'm counting on you!");
        }
    else {
        Voice_PlayVoice("I4504000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝. Welcome.\nWhat are you after today?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4504000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I noticed that you've gotten more\nfashionable lately.");
        Voice_PlayVoice("I4504000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I was thinking of having you\ncoordinate an entire outfit for me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Ah...\nyou're not going to yell at me after\nI pick clothes for you, right?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4504000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I won't! ... I mean, I can't.");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I4504000_D01000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway!\nI've reserved some of your time,\nokay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best to pick!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
