section "b04_m6_213"{
    int var0 = Date_GetDateOption(2, 65);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406213_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh! That's a White Tiger!");
            }
        else {
            Voice_PlayVoice("B0406213_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh! T-That's--! A White Tiger!!");
            }
        Message_MsgSel("Wah～, how rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is still a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I've seen one here in Japan but only\non TV.\nLet's watch it carefully!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I've only seen it here in Japan!\nLet's watch it carefully.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that's true. Seems like jewels.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that's true. Seems like jewels.");
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
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... You're boring.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406213_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, there seems to be a photography\nevent with a baby White Tiger.");
            }
        else {
            Voice_PlayVoice("B0406213_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, there's even a photography\nevent with a baby White Tiger.");
            }
        Message_MsgSel("I want to hug it tightly!", "It's not good, it could be dangerous!", "I wonder if it'll jump like a cat?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, that's true!\nIt will be soft and fluffy.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nI'm sure it'll be soft and fluffy!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406213_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Surely there wouldn't be a\nphotography event if it was\ndangerous.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Boring.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's possible to jump in surprise.\nI want to try it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, it might be risky.\nIt's okay though, I want to play!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406213_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow, what an amazing crowd!\nEveryone wants to view the White\nTiger.");
            }
        else {
            Voice_PlayVoice("B0406213_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow, an amazing crowd!\nAll of these people viewing the\nWhite Tiger!?");
            }
        Message_MsgSel("It's everyone's favorite!", "It's hard to see with so many people.", "The White Tiger is serious too.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it's a pretty rare character\nloved by all.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nEven accepted on television and in\nnewspapers!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess you can say that....\nAh, it's less crowded over there.\nLet's go.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406213_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so......\nAh, it's less crowded over there!\nCome on!");
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
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm...\nMaybe because it's so popular it\ncan't help but to be nervous to some\nextent?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm...\nIf you say that, we should also go\nhome, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Now that you mention it...\nSomehow, it looks tired....\nIt might have had a tough time.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406213_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Amazing, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406213_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The White Tiger exhibit just\nhappened to be today...\nBut they can see it's partner\nperfectly.");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406213_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You can still be nice to it, even\nthough it's an animal...\nand even to people like me.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406213_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I respect that...\nI wonder if by being with you, I'll\nbe able to be like that one day.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
