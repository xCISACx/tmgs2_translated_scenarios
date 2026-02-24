section "b04_m6_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
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
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I'm left laughing my butt off!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, yeah!\nI'm left laughing my butt off!");
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
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI laughed the entire time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI kept laughing the entire time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406142_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You didn't like it?\nI thought that was funny though...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406142_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, you didn't get the humor.\nIt was the best!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406142_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It wasn't that great today.");
            }
        else {
            Voice_PlayVoice("B0406142_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It wasn't that great today.");
            }
        Message_MsgSel("We should have laughed more for them.", "Huh, really? I never noticed it.", "The comedians were half-assing it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406142_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No, if we did, the comedians\nwouldn't learn from this experience.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406142_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But if we did that, the comedians\nwouldn't learn from this experience!");
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
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You really paid attention, I see....\nWell, that's fine.");
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
                Voice_PlayVoice("B0406142_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, that sounds like you, Senpai!\nI think you got it more than I did\ntoday.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I think so too.\nIt's not easy to be a comedian.");
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
                Voice_PlayVoice("B0406142_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You do get it, Senpai.\nYeah, if you're interested in a\ncomedy combo, I'm willing to be your\npartner!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
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
            Voice_PlayVoice("B0406142_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That last comedy, was the best!\nWhich one did you like, Senpai?");
            }
        else {
            Voice_PlayVoice("B0406142_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That last comedy, was the best!\nWhich one did you like, Senpai?");
            }
        Message_MsgSel("Probably the last joke.", "Everything was funny!", "Maybe ｛Amachi＊＊｝'s laughing face.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "As expected!\nI laughed so hard, that I almost ran\nout of breath.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh, as expected!\nI laughed so hard, that my back\nhurts.\nReally, the best!");
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
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see. That's alright.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406142_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "All? Yeah.\nWell, overall it was interesting.");
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
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406142_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Huh?\nUmm, I don't get what you mean...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406142_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm... You wanted to say...\nthat my face looks strange when I\nlaugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406142_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm... You wanted to say...\nthat my face looks strange when I\nlaugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No! Umm...\nI thought that you look really happy\nwhen you laugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's the first time I've seen you\nsmile like that,\n｛Amachi＊＊｝.");
                Character_ChFace(0, 0, 11);
                System_Wait(30);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406142_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Umm, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh! So sorry. I was wrong.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406142_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It's okay, not that I mind.");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406142_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nMe too, I'm relieved because of\nSenpai's lovely smile.\nAnd that's today's highlight.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406142_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, which joke is your\nfavorite?\nI'm curious, hurry!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Tha-That's all too sudden, nothing\ncomes up～.)");
                }
            break ;
            }
        }
    }
