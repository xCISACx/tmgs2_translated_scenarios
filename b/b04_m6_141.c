section "b04_m6_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
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
        Message_MsgSel("That play was the best!", "That play was so-so.", "That play was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, you're right.\nI was quite able to enjoy it.");
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
                Voice_PlayVoice("B0406141_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was so-so. It wasn't that boring.");
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
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Though I was uneasy...\nYes, it was kind of interesting.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nHalfway through it I was a little\nsleepy.\nBut it was good.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406141_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nStill, I was able to enjoy it in my\nown way...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406141_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nHowever, I was still able to enjoy\nit.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406141_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Their costumes were very flashy.");
            }
        else {
            Voice_PlayVoice("B0406141_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Their costumes were flashy.");
            }
        Message_MsgSel("Their costumes should be flashy on stage.", "They seem to have overdone it a little.", "It appears that they just have money.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I think so too!\nTheir costumes were flashy, but I\nwas happy to watch.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think so too?\nTheir appearance looked good and\nvery beautiful!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406141_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, is that so?\nIt seemed about right, it was\ninteresting to watch.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406141_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So?\nIf they wore plain costumes they'd\nlook boring.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406141_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That...\nI'm sorry, I don't like your\nviewpoint...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406141_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nDid you look before you thought of\nsuch a thing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406141_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was a little hard to hear the\nperson with the leading role.");
            }
        else {
            Voice_PlayVoice("B0406141_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, now what was the person with\nthe leading part saying?");
            }
        Message_MsgSel("They had a small voice!", "I appreciate their effort.", "Isn't it okay since they're popular?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You also think so?\nThey should do vocal practice all\nover again!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think so too?\nThey should enter a cheering squad\nand start from scratch to train and\ncorrect their speaking.");
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
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're kind, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406141_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's sweet, Senpai.");
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
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406141_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\n*Sigh* well with a viewpoint like\nthat...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406141_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... That's not really the problem.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406141_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "How is that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406141_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If a person is forgiven for\neverything they do...\nI think things like that are wrong.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406141_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Any kind of person should make an\neffort.\nNothing can be done effortlessly.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406141_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI'd say things like this aren't\nreally convincing...");
                Voice_PlayVoice("B0406141_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "In order to be the \"me\" that\neveryone thinks I am, surely, no one\nknows of the things I do...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406141_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I wonder who the real \"me\"...\nmight be...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    }
