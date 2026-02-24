section "h4c_m6_003"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to cook today.\nI wonder what I should make.");
    Message_MsgSel("Microwave gyuudon.", "｛主人公姓名｝'s special stir fry.", "Ossobuco.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave gyuudon.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_000_D03", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("H4C06000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai!\nIs it perhaps your turn to make\nfood?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H4C06000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So, on today's menu is............\nThis?");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("", 6, "H4C06000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, I'm hungry!\nBring out some food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I've made something already.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thanks! So we're having............");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H4C06000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm... are we having this?");
            }
        else {
            Voice_PlayVoice("", 6, "H4C06000_F00500");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, it's your\nturn to make food, right?\nHave you made it, yet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I've already made something.");
            Voice_PlayVoice("H4C06000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've actually been looking forward\nto it since morning!\nUhh, so we're having...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("H4C06000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Um... are we perhaps having this?\nReally?");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 9);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("H4C06000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uhh... Thanks for the food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("H4C06000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thanks for the food.... It was nice.\nIt tasted like instant food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Voice_PlayVoice("H4C06000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thanks for the food. Umm, Senpai...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4C06000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... No, it's nothing!\nYeah, you've also got it tough\nbecause of practice.\nIt can't be helped!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\nChinese stir fry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_000_D03", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("H4C06000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai!\nIs it your turn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It looks nice.");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("", 6, "H4C06000_F01400");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, I'm hungry!\nBring out some food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I've made something already.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thanks! ...\nEh, it's more decent than I thought\nit would be!\nCan I eat already?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Please eat.");
            }
        else {
            Voice_PlayVoice("", 6, "H4C06000_F01600");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, it's your\nturn to make food today, right?\nHave you made it, yet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝!\nYeah, I've made it already.");
            Voice_PlayVoice("H4C06000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've actually been looking forward\nto it since morning!\nUhh, so we're having...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa, it looks nice!\nAre you good at cooking? Can I eat?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("H4C06000_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was nice. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Voice_PlayVoice("H4C06000_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, yeah, it was a pass....\nKidding! It was nice!\nThanks for the food!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Voice_PlayVoice("H4C06000_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Thanks for the food!\nYou did quite well, Senpai.\nIt was nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy.)");
                }
            Parameter_AddCh1Param(6, 61, 3);
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("H4C06000_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh... I kind of feel...... Sorry.\nExcuse me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Voice_PlayVoice("H4C06000_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Gross. I don't need any more.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else {
                Voice_PlayVoice("H4C06000_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Thanks for the food. Umm...\nI'm sorry, but can I get some\nstomach medicine?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            Parameter_AddCh1Param(6, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright! I'll take on Ossobuco.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_000_D03", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("H4C06000_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai!\nIs it perhaps your turn to make food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow, how wonderful!\nCan we really eat this?\nI'm so happy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("", 6, "H4C06000_F02700");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, I'm hungry!\nBring out some food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure thing, I've already made\nsomething.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thanks! ... Wow!\nWhich store did you buy this from?\nThere's no way you made this,\nSenpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I did make it. Please eat!");
            }
        else {
            Voice_PlayVoice("", 6, "H4C06000_F02900");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, it's your\nturn to make food today, right?\nHave you made it, yet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝!\nYeah, I've made it already.");
            Voice_PlayVoice("H4C06000_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've actually been looking forward\nto it since morning!\nUhh, so we're having...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4C06000_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa, it's extremely wonderful!\nSo you can make this kind of\nthing...\nCan I eat?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("H4C06000_F03200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was really nice!\nYou're good at cooking, Senpai.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I'm glad I tried my best.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Voice_PlayVoice("H4C06000_F03300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was nice.\nBut as expected, it's different than\nrestaurant food!\n... Right, Senpai?");
                Voice_PlayVoice("H4C06000_F03400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Kidding.\nYou're really amazing, Senpai.\nI'm seeing you in a new light.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            else {
                Voice_PlayVoice("H4C06000_F03500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was really yummy!\nI'm really impressed.\nThanks for the food.\nYou're amazing, Senpai!");
                Voice_PlayVoice("H4C06000_F03600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "After eating such nice food, I won't\nbe able to eat at normal stores now.\nTake responsibility for this,\nSenpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I put effort into making\nthe food.)");
                }
            Parameter_AddCh1Param(6, 61, 5);
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("H4C06000_F03700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh... Sorry. I......\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Voice_PlayVoice("H4C06000_F03800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it's expected of something\nyou'd make, Senpai.\nThere's no mistaking it.");
                Voice_PlayVoice("H4C06000_F03900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I give up already.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else {
                Voice_PlayVoice("H4C06000_F04000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI'm sorry, but I'm already at my\nlimits.\nThanks for the food.");
                Voice_PlayVoice("H4C06000_F04100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm, Senpai...\nIt's alright to make basic food,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            Parameter_AddCh1Param(6, 61, 5);
            }
        break ;
        }
    }
