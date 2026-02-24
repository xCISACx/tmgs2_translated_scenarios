section "b04_m6_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406147_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is... that really so?\nI'm sorry, I don't know much about\nJazz...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406147_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-Is that so? It was hopeless.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That was so-so?\nI'm not that familiar with Jazz.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmmm...\nI'm not sure if it was good or bad.\nThat was just so-so.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm honestly not sure if I would\ncall Jazz boring.\nHmmm. Jazz is complicated.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm honestly not sure if I would\ncall Jazz boring.\nI feel like I'm tired!");
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
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406147_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Which point of Jazz should I take\nnote on for me to enjoy listening?");
            }
        else {
            Voice_PlayVoice("B0406147_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You know, what's so interesting\nabout Jazz?");
            }
        Message_MsgSel("Probably the groovy feeling.", "Try paying attention to the solos.", "Honestly, I don't get it either.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406147_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A groovy feeling...?\nWell, that's tough.\nI still don't get it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406147_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A groovy feeling?\nI still don't get it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The part where they are performing a\nsolo.\nWell, if it's that, then I get it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, the part where they are\nperforming a solo.\nWell, if it's that, then I get it.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nThank heavens, I thought I was the\nonly one.");
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
                Voice_PlayVoice("B0406147_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, Senpai didn't get it as well.\nI'm quite relieved!");
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
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406147_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "*Sigh* I think I'm drifting off.");
            }
        else {
            Voice_PlayVoice("B0406147_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI feel like I'm drifting off a\nlittle, am I not?");
            }
        Message_MsgSel("There were many adults.", "Maybe you should get your mind off of it?", "No, I'm used to it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406147_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I guess.\nMaybe this isn't a place for me to\ncome to.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406147_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I guess.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess.\nIt's a win if you're having fun.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406147_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You may be right.\nIt would be a loss if we don't enjoy\nit, even for a bit.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406147_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Please stop the compliments...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406147_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai.\nThe compliments are too obvious.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406147_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's not that. I got all nervous...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you got into it halfway through.\nYou looked happy.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406147_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Yeah.\nIt's because I've already heard the\nsong.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Then doesn't that mean you're\nfamiliar with it?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("", 6, "B0406147_F02400");
                Message_Who(6);
                Message_MsgDisp("Amachi", "｛主人公｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wonder if it's okay to feel that\nway.\nThey had a lot of songs that I'm not\nfamiliar with.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406147_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, I can depend on you today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles* I see, \"today\".");
                Voice_PlayVoice("B0406147_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Just \"today\"....\nNot always, it's unacceptable for a\nman's pride.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406147_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Thank you, Senpai. I feel...\na lot better.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    }
