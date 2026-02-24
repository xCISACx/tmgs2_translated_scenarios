section "s09_m6_000"{
    int var0;
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, fortunes.");
        Voice_PlayVoice("S0906000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm... Should I?");
        Message_MsgSel("Okay, let's pull one.", "I'll pass.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0906000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Then let's do it.\nI hope I draw excellent luck!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get a good result!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S0906000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝, did you\nwant to pull one?");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0906000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ehh, it's okay if we don't do\nsomething like that, right?\n... I'm a little disappointed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have pulled a\nfortune, after all?)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0906000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, fortunes! Hey, let's pull one!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm... Should we?");
        Message_MsgSel("Let's take the chance to pull a good one.", "Eh～, it's too much of a bother.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S0906000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Then I'm in! ...\nSenpai, don't pull terrible luck for\nNew Year's Day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get a good result!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S0906000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Then I won't do it.");
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("S0906000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even though it's New Year's Day? ...\nHow boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have pulled a\nfortune, after all...)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 6, "S0906000_F00800");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nLet's pull a fortune!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm... Should I?");
        Message_MsgSel("Yeah, let's do it!", "I'll pass, I'm not interested.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0906000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Now you're talking!\nOookay, I'll pull a good one!");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Is that so?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0906000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nBut you can't choose the results...\nI hope I get a good fortune.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get a good result!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S0906000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Maybe you want to give it a try?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0906000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "N-Never! Fortunes are nothing...\n*Sighs*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have pulled a\nfortune, after all...)");
            var0 = 1;
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    switch (var0){
        case 0:
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "M6", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M6", 0);
    }
