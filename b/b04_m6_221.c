section "b04_m6_221"{
    int var0 = Date_GetDateOption(2, 66);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406221_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I understand this exhibition is on\nlife at that time.");
            }
        else {
            Voice_PlayVoice("B0406221_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's an exhibition of things on\na tablecloth from the old days.");
            }
        Message_MsgSel("They even have things in the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's true.\nFeel free to research.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it does.\nYou seem like you want to research.\nFeel free.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are you so lost that you're not even\ninterested?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou seem to be so much at a lost\nthat you aren't interested.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "In fact, I thought the same thing\ntoo.\nMaybe this isn't a place to come\nvisit.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it took a lot of effort to\ncome visit.\nI study enough at school.");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406221_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If it were possible to become a\nperson from the olden days, who\nwould you want to be?");
            }
        else {
            Voice_PlayVoice("B0406221_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Who would you want to become if you\nwere born in those days?");
            }
        Message_MsgSel("A Princess, of course!", "A ninja, a female ninja!", "Still as a city girl?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hehe. As I thought, you are a girl.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hehe, just like a girl...\nOh, because life may seem to be\neasy?");
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
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Nice, a ninja!\nI yearned to be one when I was a\nchild.");
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
                Voice_PlayVoice("B0406221_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, a ninja?\nI also yearned to be one when I was\na child.\nI thought it'd be cool.");
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
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That doesn't seem to be much of a\nchange from now...\nAnd that's okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why would you want to be a city\ngirl?\nI don't understand too well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406221_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's a Japanese sword!\nIt's genuine, and amazing...");
            }
        else {
            Voice_PlayVoice("B0406221_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's a Japanese sword!\nIt's the real thing. Amazing...");
            }
        Message_MsgSel("The shape is excellent!", "It feels weighed with history.", "The sword is scary.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, the real thing also differs in\nstrength!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nThe strength of it also differs from\nthe imitations!");
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
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nIt's actually an amazing thing to\nsay even though it was used.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406221_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nIt's really an amazing thing to say\nsince it was used in the old days.");
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
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406221_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, then we'll go.\nI wanted to look at it a little\nmore...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So? I want to look a little more.\nSenpai can go look at other things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406221_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Oh, a description.\nThis sword was made by a skillful\ncraftsman in the Edo era, it's one\nthat was actually used...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406221_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "............ Hey, Senpai.\nDo you want to go to other places\nsoon?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, why?");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406221_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Because, this thing was actually\nused...");
                SoundEffect_PlayStream(3, "SS_T_00_280_M00");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406221_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wah!");
                SoundEffect_PlayStream(3, "SS_T_00_141_M00");
                Screen_StartShakePlane(0, 32, 32, 0, 32);
                System_Wait(124);
                Message_Who(0);
                Message_MsgDisp("主人公", "Kyaa! Are you all right?\n｛Amachi＊＊｝.");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406221_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm sorry! I just panicked...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm fine.\nBut I was surprised when I hear such\na sudden noise.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406221_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I got scared and wanted to hold onto\nSenpai's arm...\nBut in fact, it was no use...\nI'm so ashamed...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Are you depressed,\n｛Amachi＊＊｝?\nI hope you'll be all right...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
