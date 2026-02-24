section "u01_g3_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(22) >= 95){
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm not feeling so well today, so\nperhaps I should lie down...");
        }
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh, who is it?");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    if (Parameter_GetCh1Param(12, 64) == 0){
        Voice_PlayVoice("U0112000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah, hello, it's me!\nDo you know who it is?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Nishimoto＊＊｝, right?");
        Voice_PlayVoice("U0112000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "As expected, you know who it is,\neven though I didn't tell you my\nname!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks. Anyway, what's up?");
        Voice_PlayVoice("U0112000_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah, right!\nI've been talking about petty things\nagain, and I've wasted 30 minutes.");
        Voice_PlayVoice("U0112000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "It can't be helped that my cellphone\nbills cost a lot.\nDo I talk too much?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Nishimoto＊＊｝...");
        Voice_PlayVoice("U0112000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "... Ah. Ahaha, sorry...");
        Voice_PlayVoice("U0112000_L00500", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Anyway, about why I really called.\nAre you free right now?\nWill you hang out with me?");
        Voice_PlayVoice("U0112000_L00600", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "They're selling these limited cakes\nthat a famous patissiere made today.");
        Voice_PlayVoice("U0112000_L00700", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "There are only 30 in the first batch\ntoday, so let's go line up for it\ntogether!");
        Message_MsgSel("Okay, let's go!", "I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0112000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Wah, for real? I'm so happy!!\nThanks!");
            Voice_PlayVoice("U0112000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I'll be waiting at the entrance of\nthe shopping district then.");
            Voice_PlayVoice("U0112000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I might be lining up, but I'm in\nyour debt～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'll see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(12, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G3", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0112000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Ah, really... That's too bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry...");
            Voice_PlayVoice("U0112000_L01200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Ah, sorry!\nDon't worry about it, okay?\nI mean, since I called you outta the\nblue.");
            Voice_PlayVoice("U0112000_L01300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Let's go hang out next time!\nIt's a promise! Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though she went through the\ntrouble to ask me, I turned her\ndown.\nThat was probably a bad thing to\ndo...)");
            Parameter_AddCh1Param(12, 60, #3);
            Message_CloseMsg();
            Screen_WipeOut(2);
            break ;
            }
        }
    else {
        Voice_PlayVoice("U0112000_L01400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah, hello, it's me!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Nishimoto＊＊｝?\nWhat's up?");
        Voice_PlayVoice("U0112000_L01500", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I'm real sorry, but can you come\nwith me somewhere today?");
        Voice_PlayVoice("U0112000_L01600", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "A famous French chocolatier is\ncoming.");
        Voice_PlayVoice("U0112000_L01700", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Only ten people are allowed in, and\nI heard that they'll let you eat a\nspecial chocolate truffle.");
        Voice_PlayVoice("U0112000_L01800", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I really wanna eat it, so I gotta\nline up.");
        Message_MsgSel("Okay, that's fine!", "Sorry, I can't today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0112000_L01900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Eh, for real? Ah, thank gosh～!");
            Voice_PlayVoice("U0112000_L02000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I was ready to be all depressed if\nyou were going to reject me.\nI'm relieved now that I've got\nsomeone to go with.");
            Voice_PlayVoice("U0112000_L02100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "See, aren't I the type to just keep\non talking, just like a talking\nfish?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A talking fish...?)");
            Voice_PlayVoice("U0112000_L02200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Anyway, I will be at the entrance of\nthe shopping district.\nSee you there!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I should get ready.)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(12, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G3", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0112000_L02300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I thought so.");
            Voice_PlayVoice("U0112000_L02400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It was too sudden....\nAnd you would also have other stuff\nto do...");
            Voice_PlayVoice("U0112000_L02500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I'll ask you out some other time.\nWhen that time comes, be nice!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'm sorry.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if it was a bad thing to\nturn her down...)");
            Parameter_AddCh1Param(12, 60, #3);
            Message_CloseMsg();
            Screen_WipeOut(2);
            break ;
            }
        }
    Parameter_InPl1Param(339, #1);
    }
