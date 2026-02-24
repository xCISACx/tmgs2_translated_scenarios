section "w01_g3_000"{
    if (Parameter_ChkHoliday(2) != 1){
        Character_Chara_GS2(12, "G3_01F", 0);
        Music_PlayBGM(0, "MN_C_12_000_D00");
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0112000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Oh, over here!\nOver here, ｛主人公｝!!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Nishimoto＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W0112000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ta-da! Do you know what these are?");
        Message_Who(0);
        Message_MsgDisp("主人公", "What are those?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("W0112000_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Amusement Park special passes!\nWould you like to join me this\ncoming Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "The Amusement Park, huh...");
        Voice_PlayVoice("W0112000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Hey, sounds good, doesn't it?\nSounds interesting, right?\nCome with me!");
        Message_Who(0);
        Message_MsgDisp("主人公", "But it seems like there are four\npasses.\nAre others coming?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(12, 3, (#1));
        Voice_PlayVoice("W0112000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Oh, well, don't mind the small\ndetails.");
        Message_MsgSel("Yeah, I'll go!", "Sorry, I've got plans.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0112000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, great～!\nIn that case, don't forget this\ncoming Sunday!");
            Voice_PlayVoice("W0112000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Let's have a blast,\n｛主人公｝!");
            Character_Chara_GS2(12, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This coming Sunday...\nI wonder who else is coming...)");
            Date_SetNextSandayDateEvent(12);
            break ;
            case 1:
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("W0112000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Woah, seriously? I'm shocked!");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0112000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I guess it can't be helped if you've\ngot plans, as well.\nIt's fine, I'll ask someone else\ninstead.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0112000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Nah, I'll ask you, again.\nI hope we can go out together next\ntime!");
            Character_Chara_GS2(12, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        Parameter_AddCh1Param(12, 86, 1);
        }
    else {
        int var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder who it is...?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("W0112000_L01000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Nishimoto＊＊｝.\nWhat's up?");
        Voice_PlayVoice("W0112000_L01100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I know it's so sudden, but are you\nfree this coming Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sunday? Why?");
        Voice_PlayVoice("W0112000_L01200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I've got four passes for the\nAmusement Park.\nLet's go together!");
        Message_Who(0);
        Message_MsgDisp("主人公", "You said four passes...\nAre others coming?");
        Voice_PlayVoice("W0112000_L01300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Umm, leave that part to me.\nSo, what about it?");
        Message_MsgSel("Sure, I'll go!", "That day's no good...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("W0112000_L01400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, great!\nIn that case, I'm signing you up\nwith the gang.");
            Voice_PlayVoice("W0112000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's this coming Sunday.\nDon't you forget!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, got it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder who else is joining this\ncoming Sunday?)");
            Date_SetNextSandayDateEvent(12);
            break ;
            case 1:
            Voice_PlayVoice("W0112000_L01600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "What～! Are you serious?\nI'm so shocked...");
            Voice_PlayVoice("W0112000_L01700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I see you've got plans, as well.\nI'll ask someone else instead.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm sorry...");
            Voice_PlayVoice("W0112000_L01800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's fine. Don't sweat it.\nIf anything happens, I'll ask you,\nagain.\nI'm counting on it, when that time\ncomes!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
