section "b04_m6_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(6, "M6_09F", 0);
    Background_Bg_GS2("BG_FP610_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M6", 10);
    if (var0 == 0){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406110_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is Senpai good at swimming?");
            }
        else {
            Voice_PlayVoice("B0406110_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Can you swim properly, Senpai?");
            }
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 11);
                    Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                    Character_ChFace(1, 0, 11);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406110_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Heehee, that's quite good.\nNo need to worry.");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                    Message_SkinshipSet(0);
                    }
                else {
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(6, 2, (#1), 1);
                    Character_ChFace(0, 3, 3);
                    Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406110_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Oh, well said.\nWell then, compete with me!");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                    Message_SkinshipSet(0);
                    }
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Voice_PlayVoice("B0406110_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nUmm, grasp the kickboard tightly.\n'cause what you're saying isn't very\nconvincing...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                    }
                else {
                    Voice_PlayVoice("B0406110_F00500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nSay something like that after you're\nnot using a kickboard.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                    }
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nIf that's the case, it's fine.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see.\nWell then, In that case, I'll go\nswimming.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, I'm not so good at teaching...\nEven so, sure.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, that's fine....\nI'm going to be relentless, so be\nprepared, okay?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406110_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "As expected, the swimming pool is\nnice.\nI feel refreshed when I swim to my\nheart's desire.");
            }
        else {
            Voice_PlayVoice("B0406110_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "As expected, yes, the swimming pool\nis nice.\nIt's fun to be able to swim to my\nheart's desire!");
            }
        Message_MsgSel("It's also good for losing weight.", "I can't stand the actual sea.", "However, it's nice to use it with comfort.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 0, (#1), 1);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_BlinkStart(6, 0, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's so like a woman to worry about\nlosing weight.\nLet's swim faster, then.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then, I'll cooperate.\nHey, let's swim together!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 3);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nEven if it's the reason for a pool\nbeing a pool.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 0, 11);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nIs there no difference between a\npool and the sea?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406110_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Umm, Senpai.\nThat's the reason why we came to the\npool, for less seclusion...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406110_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nIs there a hot spring here?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0406110_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That woman is amazingly fast.\nShe seems to be a pro swimmer.");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0406110_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Look at that woman!\nShe seems to be a professional\nswimmer!\nAmazing speed...");
            }
        Message_MsgSel("Her form is beautiful.", "Don't be defeated, ｛Amachi＊＊｝!", "... Are you fascinated?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I think so too.\nAfter all, a fast person is\ndifferent.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 0, (#1), 1);
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Does Senpai think so, also?\nI can swim fast when I want to swim\nthat way...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I already am, Senpai.\nHer partner's a woman too, but no\nmatter what, I can't match a\nprofessional.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406110_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even if I am skilled, it'd be\nimpossible.\nI do want to challenge her though.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406110_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Don't be silly, were you watching\nfor no reason?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406110_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Yeah, so?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406110_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know...");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406110_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm not looking at her that way....\nYou're right next to me, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406110_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Give me a break, I thought that you\nunderstood...");
                Character_ChFace(0, 3, 1);
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406110_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I'm gonna swim alone! Ciao!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nWhy were you troubled,\n｛Amachi＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
