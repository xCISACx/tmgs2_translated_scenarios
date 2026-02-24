section "b04_m6_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406191_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah... It's so red.");
            }
        else {
            Voice_PlayVoice("B0406191_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Amazing... It's all bright red.");
            }
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406191_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nIt looks like nothing but Autumn\nleaves to me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406191_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So?\nIt just looks like Autumn leaves.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Very true. The yellow is shown too.\nYou noticed it very well.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that's true.\nThere's also the yellow.\nYes, it's certainly beautiful.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh! Where? You discovered it! Nice!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Where, where!?\nI don't see a bagworm, I want to\nsee!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_BlinkStart(6, 2, (#1));
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406191_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The entire mountain is really red...");
            }
        else {
            Voice_PlayVoice("B0406191_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The entire mountain is really red...");
            }
        Message_MsgSel("A passionate color.", "The color of ketchup.", "*Giggles* The color of blood.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The color of passion?\nSenpai's ideas of the Autumn leaves\nare interesting.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's interesting to see and consider\nSenpai's ideas.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, when you say that, it is\nsimilar.\nI want to eat an omelet now.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, when you say it like that, it is\nsimilar!\nOh, I want to eat a light and fluffy\nomelet.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(6, 0, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406191_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406191_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Come, let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406191_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, what do you associate with\nAutumn?");
            }
        else {
            Voice_PlayVoice("B0406191_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai.\nWhat do you associate with Autumn?");
            }
        Message_MsgSel("The Autumn taste, absolutely.", "With sports and reading.", "A woman's heart and the Autumn weather!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Chestnuts, roasted sweet potatoes,\nmushrooms, mackerel, pike...\nThere's a lot.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nChestnuts, roasted sweet potatoes,\nmushrooms, mackerel pike...");
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
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "This season is easy to spend.\nI'll pass on reading, but are there\nany good sports?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh, a good season for sports.\nHowever, I'll pass on the reading～.");
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
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406191_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why that example, Senpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406191_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nMaybe it's too good of an example?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0406191_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That metaphor.\nDid you know at first it was, \"A\nman's heart and the Autumn weather\"?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, really?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406191_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\n\"A woman's heart and the Autumn\nweather\" was only recently coined.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...\nYou know it well,\n｛Amachi＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0406191_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I liked the phrase quite a lot after\nI looked into it.");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406191_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I thought that it was pointless\nsince it's usually not very useful.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406191_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's not like that....\nNow, it became a chance to speak to,\nSenpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
