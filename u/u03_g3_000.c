section "u03_g3_000"{
    if (Parameter_GetCh1Param(12, 64) == 0){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("U0312000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I really want to thank you for\naccompanying me today.\nAs thanks, here!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Voice_PlayVoice("U0312000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I cut out scraps from magazines.\nIt's the latest desserts catalog!\nThis often appears weekly in the\nlatest publish.");
        Message_MsgSel("Accept Handmade Catalog.", "Do not Accept Handmade catalog.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you!\nI'll take my time looking at it.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("U0312000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah... I'm glad!\nThis is my first time showing this\nto someone.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("U0312000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's a bit crazy, but I think you'll\nget hooked on it.\nI'm glad you're happy with it!");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Handmade Catalog\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel my intelligence getting\nsharper...)");
            Parameter_AddPl1Param(18, 5);
            Parameter_AddPl1Param(20, 5);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, sorry...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0312000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Oh, just as I thought. It's fine!\nIt's fine! Don't mind it.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0312000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's a bit crazy, right?\nIf it wasn't a hobby, it'd just be a\nnuisance.\nI'll just make it better with other\nthings.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like I've done something\nbad...)");
            Parameter_AddCh1Param(12, 60, #3);
            break ;
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("U0312000_L00600", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Thank you for tagging along with me\ntoday!\nBecause of you, I was saved.");
        Voice_PlayVoice("U0312000_L00700", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "It's your turn to be selfish next\ntime.\nJust call me anytime, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! Understood.");
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("U0312000_L00800", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "In that case, that's all for today.\nLet's go out together, again!");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(12, 2, (#1));
        Voice_PlayVoice("U0312000_L00900", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "You came even with all the trouble\ntoday.\nI'm sorry for not having anything.\nNot even loot...");
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(12, 2, (#1));
        Voice_PlayVoice("U0312000_L01000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "If it's okay, would you like to\nbring this home?\nAs my thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, this is...");
        Voice_PlayVoice("U0312000_L01100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Haruhi Nishimoto's special edition\nof evaluated places to eat real\nsweets with rankings!");
        Voice_PlayVoice("U0312000_L01200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "The places I've gone to so far have\nall been checked.\nI think it'll be a good reference!");
        Message_MsgSel("Accept Ranking Book.", "Do not accept Ranking Book.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, thank you!\nI'll take it with no hesitations!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("U0312000_L01300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, yeah, great!\nIf you hadn't accepted it, I would\nhave gone home all heartbroken.");
            Voice_PlayVoice("U0312000_L01400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "If there's a shop you like, let's go\nand eat there together!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Ranking Book\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(My news has gotten more\naccurate...)");
            Parameter_AddPl1Param(18, 10);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, sorry...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0312000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Of course.\nYou aren't the kinda person who'd be\ninto this kind of hobby...");
            Voice_PlayVoice("U0312000_L01600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, I understand.\nIf you ever need it just tell me,\nokay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thank you!");
            Parameter_AddCh1Param(12, 60, #3);
            break ;
            }
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(12, 2, (#1));
        Voice_PlayVoice("U0312000_L01700", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I'm sorry about today, alright?\nThe trouble for accompanying me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Not at all!");
        Voice_PlayVoice("U0312000_L01800", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Of course, we talked about a lot of\nthings while we were waiting.\nI had fun!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(12, 3, (#1));
        Voice_PlayVoice("U0312000_L01900", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "When there's something again, I'll\ncall.\nWhen that time comes, I'll count on\nyou!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll see you again,\n｛Nishimoto＊＊｝!");
        Music_StopBGM(0, 40);
        }
    if (Parameter_ChkPlayer(5)){
        System_Call_GS2("K02", "G3", 11);
        }
    Parameter_AddCh1Param(12, 64, 1);
    Parameter_AddCh1Param(12, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
